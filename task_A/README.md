IN TRACK A i did task 2
In this task i worked on configurng the Nav2 stack for autonomous navigation in a simulated evnvironment using ROS2.The Goal of this PS was to ensure save navigation of thr robot around obstacles.

What i did:
Set up Nav2 using the default bringup launch files
Opened and configured RViz for visualization
Loaded the map and verified map display
Edited the nav2_params.yaml file
Adjusted inflation parameters in both global and local costmaps
Verified costmap visualization in RViz
The inflation layer was configured to maintain a safe distance from obstacles: inflation_radius = 0.5

issues occuring:
TF frame issue (map frame not consistently available)
Localization status shows as unknown
Navigation goal execution is not yet fully functional
Occasional message drops from /base_scan due to queue overflow

i am still debugging as to what is the error occuring , however i was able to configure and understand the Nav2 costmaps and robot footprint tuning. I learned Nav2 architecture , Costmaps and Obstacle Handling, Robot Footprint Importance, Inflation Parameters, Transform system errors, Localization (AMCL), 

Inflation Radius defines how far the obstacles are expanded over the whole area. It is the radius in which , if the robot stays, it is in the safe zone. 
Cost scaling factor is like the fear factor of the robot:
if high cost scaling factor = less fear = sharper turns around the obstacles and closer to them as well
if low cost scaling facotor = more fear = smoother turns and maintain more distance from obstacles.
