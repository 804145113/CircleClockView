#CircleClockView 2.0
抽取属性，支持故事版，直接视图直接关联class使用，添加是否显示外圈刻度属性。

## 支持Cocoapod安装：

![](https://i.niupic.com/images/2016/10/10/gqOtou.png)

#用法
=
1.如图关联  
  
![](http://i.niupic.com/images/2015/11/18/n5ZFUR.png)  
2.在控制器里，添加相应插座对象
`@property (weak, nonatomic) IBOutlet CircleClockView *circleV;`
  
3.在 `viewDidLoad` 方法里面，设置相应属性。
  
  `self.circleV.progress = 0.3f;`    
    `self.circleV.weight = 56.2;`  
    `self.circleV.bmi = 26.1;`

运行截图:
  
   ![](http://i.niupic.com/images/2015/11/18/hGj1gi.png)  
   
###以下是长长的分界线  
=
# CircleClockView 1.0
表盘绘制加圆形进度显示
#1.拖拽CircleClockView文件夹到你的项目
#2.在控制器里面导入CircleClockView.h 头文件
#3.调用代码
    CircleClockView *circleClockView = [[CircleClockView alloc]initWithFrame:CGRectMake(10, 100, [UIScreen mainScreen].bounds.size.width - 20, [UIScreen mainScreen].bounds.size.width - 20) Weight:56.2 Bmi:26.1 Progress:0.5f];
    [self.view addSubview:circleClockView];
