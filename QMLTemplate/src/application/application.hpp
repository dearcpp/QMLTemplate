#ifndef _APPLICATION_APPLICATION_HPP
#define _APPLICATION_APPLICATION_HPP

# include <QGuiApplication>
# include <QQmlApplicationEngine>

class Application : public QGuiApplication
{
public:

    QQmlApplicationEngine QmlEngine;

    Application(int &argc, char **argv, int = ApplicationFlags);

};

#endif // _APPLICATION_APPLICATION_HPP
