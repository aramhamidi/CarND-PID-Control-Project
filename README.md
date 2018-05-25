# Reflections

The most challenging part of the project was manually tunning the PID gains. However I found very useful general information on PID 
controllers and rule of thumb for manually tuning it in the following link:
"http://ctms.engin.umich.edu/CTMS/index.php?example=Introduction&section=ControlPID"

## PID Gains Charactristics

Proportional Gain (Kp):

We can say that "the farther you are, the harder you push". In other words, the larger the error is, the bigger your control signal needs to be. 

Consequently, increasing this gain will reduce the rising time of system. In other words, the bigger the control signal, the quicker the system gets to the target. However, at the same time increasing Kp, will increase the oscillations around the setpoint. 

Integral Gain (Ki):

This gain is responsible for correcting the steady-state error. Even if Kp and Kd are enough to stablize the system at some point, there
might be still some constant cte error remained. Increasing Ki will reduce this final steady state error. However, Ki also will increase the oscillations around setpoint. 

Differential Gain (Kd):

Increasing this gain should reduce the overshoot. This gain controls the magnitude of the control signal and prevents undesired oscillations.

## PID TUNING

I followed the steps below to obtain a desired response:

1. Start with all gains equal to zero (open-loop) and observe what needs to be improved.
2. Add Kp to improve the rise time. Adjust Kp to get the smoothest possible car movement, in the straight part of the road.
3. Add Kd to remove the overshoot. 
4. When overshoot is managable, add Ki to improve the steady-state error.

## Challenges

I used another pid controller to control the speed of the car. However going over the forums, I realized
some students have used a adaptive target speed for the car, based on how big the seeting angle is. I found it very interesting and helpful. So I also used an adaptive speed target which is between 20 to 40 mph, based on steering control signal. 
