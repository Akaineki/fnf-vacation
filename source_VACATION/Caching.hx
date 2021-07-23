package;

import flixel.addons.ui.FlxUIState;
import haxe.Exception;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import sys.FileSystem;
import sys.io.File;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.transition.TransitionData;
import flixel.graphics.FlxGraphic;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.text.FlxText;

using StringTools;

class Caching extends FlxUIState
{
    var toBeDone = 0;
    var done = 0;

    var text:FlxText;
    var logo:FlxSprite;
    var loading:FlxSprite;
    var show_cached_trace:Bool = false;

    override function create()
    {
        FlxG.mouse.visible = false;

        FlxG.worldBounds.set(0,0);

        text = new FlxText(FlxG.width / 2, FlxG.height-120,0,"Loading...");
        text.size = 16;
        text.autoSize = false;
        text.fieldWidth = FlxG.width;
        text.alignment = FlxTextAlign.CENTER;
        text.x = 0;
        
        logo = new FlxSprite(FlxG.width / 2, FlxG.height / 2).loadGraphic(Paths.image('logo'));
        logo.antialiasing = true;
        logo.x -= logo.width / 2;
        logo.y -= logo.height / 2 + 100;
        logo.setGraphicSize(Std.int(logo.width * 0.6));

        loading = new FlxSprite(FlxG.width / 2, FlxG.height-80).makeGraphic(1, 15, FlxColor.MAGENTA);

        add(logo);
        add(text);
        add(loading);

        trace('starting caching..');
        
        sys.thread.Thread.create(() -> {
            cache();
        });

        super.create();
    }

    var calledDone = false;

    function percentage(value: Float, outOff: Float):Float {
        return (value * 100) / outOff;
    }

    function update_loading()
    {
        if (toBeDone == 0) {
            loading.alpha = 0; 
        } else {
            loading.alpha = 1;
        }

        if (toBeDone != 0 && done != toBeDone)
        {
            text.text = Math.ceil(percentage(done, toBeDone)) + "%";

            loading.scale.x += 31;

            // trace(loading.scale.x + "/" + FlxG.width);
        }
    }

    function cache()
    {
        var images = [];
        var music = [];

        trace("Caching images...");

        for (i in FileSystem.readDirectory(FileSystem.absolutePath("assets/shared/images/characters")))
        {
            if (!i.endsWith(".png"))
                continue;
            images.push(i);
        }

        trace("Caching music...");

        for (i in FileSystem.readDirectory(FileSystem.absolutePath("assets/songs")))
        {
            music.push(i);
        }

        toBeDone = Lambda.count(images) + Lambda.count(music);
        if (show_cached_trace) trace("LOADING: " + toBeDone + " OBJECTS.");

        for (i in images)
        {
            var replaced = i.replace(".png","");
            FlxG.bitmap.add(Paths.image("characters/" + replaced,"shared"));
            if (show_cached_trace) trace("Cached: Image => " + replaced);
            done++;
            update_loading();
        }

        for (i in music)
        {
            FlxG.sound.cache(Paths.inst(i));
            FlxG.sound.cache(Paths.voices(i));
            if (show_cached_trace) trace("Cached: Music => " + i);
            done++;
            update_loading();
        }

        trace("Finished caching...");

        FlxG.switchState(new TitleState());
    }

}