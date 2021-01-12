#include <QtCore>


void helloWorld(QDataStream& ds)
{
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(283);
    ds << quint8(7) << QString("hello world\n").toUtf8();
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8();
}

void PrintLocalVar(QDataStream& ds)
{
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(999);
    ds << quint8(11) << int(1);
    ds << quint8(7) << QString("Lofectr top").toUtf8();
    ds << quint8(10) << int(1);
    ds << quint8(6) << int(1);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8();
}

void doubleHelloWorld(QDataStream& ds)
{
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(999);
    ds << quint8(7) << QString("printable text\n").toUtf8();
    ds << quint8(13);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8();
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8();
}

void sumFiveAndSix(QDataStream& ds)
{
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(999);
    ds << quint8(8) << int(5);
    ds << quint8(8) << int(6);
    ds << quint8(12);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.Int32").toUtf8();
}

void whileTrue(QDataStream& ds)
{
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(999);
    ds << quint8(8) << int(0);
    ds << quint8(8) << int(1);
    ds << quint8(12);
    ds << quint8(13);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.Int32").toUtf8();
    ds << quint8(7) << QString("\n").toUtf8();
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8();
    ds << quint8(14) << int(3);
}

void From1To10(QDataStream& ds)
{
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(999);
    ds << quint8(8) << int(0);

    ds << quint8(8) << int(1);
    ds << quint8(12);
    ds << quint8(13);
    ds << quint8(13);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.Int32").toUtf8();
    ds << quint8(8) << int(10000);
    ds << quint8(5) << quint8(0) << quint8(1) << QString("Relax.Bool").toUtf8() << QString("Relax.Int32").toUtf8() << QString("operator==").toUtf8() << int(1) << QString("Relax.Int32").toUtf8();
    ds << quint8(15) << int(149);
    ds << quint8(14) << int(5);
}

int main()
{
    QString filename = "test.ree";
    QFile file(filename);
    file.open(QIODevice::WriteOnly);
    QDataStream ds(&file);

<<<<<<< HEAD
    From1To10(ds);
=======
<<<<<<< HEAD
    ds << quint8(1) << QString("NameMainClass").toUtf8();
    ds << quint8(4) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("NameMainClass").toUtf8() << QString("Main").toUtf8() << int(0) << int(283);
    ds << quint8(7) << QString("fffff world\n").toUtf8();
    ds << quint8(2) << int(1) << quint8(1) << QString("Relax.String").toUtf8() << int(1) << QString("Relax.String").toUtf8() << QString("other").toUtf8();

    ds << quint8(6) << int(1);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8() << QString("text").toUtf8();
    ds << quint8(7) << QString("Hello world").toUtf8();
    ds << quint8(2) << int(4) << quint8(1) << QString("Relax.String").toUtf8() << int(1) << QString("Relax.String").toUtf8() << QString("other").toUtf8();
    ds << quint8(6) << int(4);
    ds << quint8(5) << quint8(1) << quint8(1) << QString("void").toUtf8() << QString("Relax.Console").toUtf8() << QString("Write").toUtf8() << int(1) << QString("Relax.String").toUtf8() << QString("text").toUtf8();
=======
    whileTrue(ds);
>>>>>>> 1bd5a7382fc8cd0fd0761fe6705acd6bc131348c
>>>>>>> 2d5d1c90c487899d9e4a7f918e22d690b4256345

    file.close();
    return 0;
}
