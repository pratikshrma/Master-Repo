var r=0;
var b=255;
function setup()
{
    createCanvas(600,400);
}
function draw()
{
    r=map(mouseX,0,600,0,255);
    // so in map function the first is the value that you wanna iterate
    // 2,3 is the range that you wanna iterate over
    // 4,5 is the range that you wana convert over
    // and if this dosen't make any sence just google it by~!
    b=map(mouseX,0,600,255,0);
    background(r,0,b);
    fill(250,118,222);
    ellipse(mouseX,200,64,64);
}