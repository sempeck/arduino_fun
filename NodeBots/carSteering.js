var five = require("johnny-five");
var board = new five.Board();

board.on("ready", function() {

var range = [0, 170];

  var pan = new five.Servo({
   pin: 12,
    range: range,
    center: true
  });

  var stepper = new five.Stepper({
    type: five.Stepper.TYPE.FOUR_WIRE,
    stepsPerRev: 100,
   pins: [11,9,10,8]
  });

  var joystick = new five.Joystick({
    pins: ["A0", "A1"],
    freq: 100
  });

  joystick.on("change", function() {
    pan.to(five.Fn.scale(this.y, -1, 1, 0, 170));

console.log('y: ' + this.y);
console.log('x: ' + this.x);

var go = 0;

stepper.rpm(go).cw().step(2000);

  if (this.x < -0.5) {
    go = 180;  
    stepper.rpm(go).ccw().step(2000);   
   }

   if (this.x > 0.5) {
    go = 180;
     stepper.rpm(go).cw().step(2000);
   }

  });

});
