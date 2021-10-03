# dalian
1. 录制地图数据：
roslaunch adas_control map_generator.launch 
按下：s + enter 开始录取数据
按下：c + enter 结束录取数据
注意在配置文件src/tracking/adas/config/lateral_pid_param.yaml 中配置起始点的经纬度。
~~~
/map/latitude: 31.373085
# 原点的经度
/map/longitude: 121.1948546
# 原点的高度
/map/height: 16.125
~~~

2. 开通底层的likecan 与 组合导航Can通讯
~~~bash
roslaunch likecan navigation.launch 
~~~
