function setup()
{
    createCanvas(400,400);
}
function draw()
{
    background(200,100);
    // rect(100,50,205,70);
    // so now some theory;
    // cartesian coordinate plane
    // so the top left is the zero zero 
    // so you might think that the top right is pixel 400 but its actually 399 remember that the first one is zero
    // now abot this rect so the first is for x axis and the second is for y axis and the last two are for the size of the rectangle
    line(0,50,400,300);
    // and if you wanna put the line behind the square you will render it before the rect for it to appear in the back.
    // so what if you wanna put the rect in the center 
    // you can do like

    // rectmode(CENTER);
// will talk about this rect mode later

    rect(200,200,50,50);
    // now the top right cornor of the rect is in the center but what if you wanna put the entire
    // rect in the center and i ynow you can do that calc bu why bother
}

