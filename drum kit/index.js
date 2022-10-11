function choose(x)
{
    switch(x)
        {
            case "w": var audio = new Audio("./sounds/tom-1.mp3");
            break;
            case "a": var audio = new Audio("./sounds/tom-2.mp3");
            break;
            case "s": var audio = new Audio("./sounds/tom-3.mp3");
            break;
            case "d": var audio = new Audio("./sounds/tom-4.mp3");
            break;
            case "j": var audio = new Audio("./sounds/crash.mp3");
            break;
            case "k": var audio = new Audio("./sounds/kick-bass.mp3");
            break;
            case "l": var audio = new Audio("./sounds/snare.mp3");
            break;
            default: console.log(x);
        }
        if (audio)
            audio.play();
}

// detecting click
for (var i = 0; i<document.querySelectorAll(".drum").length; i++ )
{
    document.querySelectorAll("button")[i].addEventListener("click", function(){
        choose(this.innerHTML);
        buttonAnimation(this.innerHTML);
    })
}

//detecting key press
document.addEventListener("keydown", function(event){
    choose(event.key);
    buttonAnimation(event.key);
})

function buttonAnimation(currentKey){
    var activebutton = document.querySelector("." + currentKey);
    activebutton.classList.add("pressed");
    setTimeout(function(){activebutton.classList.remove("pressed")}, 100);
}