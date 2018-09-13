# 使用说明

该程序分为客户端和服务端两部分，对应的代码分别在server和client文件夹中，f_l和newversion是小组成员做的模块，现已经整合到程序中。

## 已经实现的功能

1. 一对一聊天和群聊
2. 一对一发送文件和群体发送文件（小于2kb）
3. 更换皮肤、头像
4. 好友列表
5. 连接到MySQL数据库并进行增删改查
6. 能在本地显示表情（尚不能发送）

## 未实现的功能

1. 点击好友列表指定发送目标（目前是要在指定地方输入发送目标）
2. 发送图片、音乐、视频等大文件
3. 利用数据库验证账号和密码（目前仅支持本地的三个账号，用户名分别为1 2 3，密码均为123）
4. 将表情通过Socket发送到服务器在发送回来（目前只能在本地显示，无法发送）