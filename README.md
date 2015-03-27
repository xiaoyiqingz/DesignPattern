# DesignPattern

1. 2015年3月15日22:46:18 
   Composite: 树的实现
   Flyweight: RenderManager::GetImage中对IMG的管理用的就是Flyweight

2. 2015年3月16日22:36:01
   Add _CrtDumpMemoryLeaks() to Find Memory Leaks, and #define new  to find where cause Memory Leaks

3. 2015年3月18日10:06:17
   Facade: 外观模式 将要实现的功能封装在Facade里
   Proxy: let subject Operation do in proxy

   Template: it same like AbstractFactory

4. 2015年3月20日20:26:48
   Strategy: stategy使用组合实现接口，而Template使用继承实现接口  strategy与temeplate的区别也正是继承与组合两种实现接口方式的区别。

5. 2015年3月24日21:44:30
   Observer: 需要一个类Notifyer来保存Observer的指针，当Notifyer有变化的时候，通过保存的Observer的指针调用Observer的函数，告诉Observer它想知道的事情发生了变化，它自己去更新，并不一定更新的内容和Notifyer有关，只是告诉Observer此时该更新了

6. 2015年3月26日23:03:28
   Mediator: 当A和B需要相互通信时，由中间者来保存A，B信息，进行之间通信， 而A和B父类分别保存此Mediator即可，A和B通信时，只需要在自己的接口里调用Mediator完成通信，不用知道相互之间的信息
