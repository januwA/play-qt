#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    // 实例化了QApplication类
    // QApplication app = new QApplication(argc, argv);
    QApplication app(argc, argv);

    // 创建一个视图组件
    QLabel *label = new QLabel("hello world");
    label->setWindowTitle("qt first app"); // 设置窗口标题
    label->resize(600, 400); // 设置窗口的宽高
    label->show(); // 显示label组件

    // 返回主程序
    return app.exec();
}
