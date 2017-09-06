# QtMqtt


## Instalar QMQTT

### Descargar/Actualizar repositorio

https://github.com/emqtt/qmqtt

### Compilar
Dentro del directorio qmqtt (repositrio)

mkdir build
cd build
qmake ..
make install

## Agregar al proyecto

En el .pro incluir las lineas:

INCLUDEPATH += <QMQTT>/qmqtt/build/include
INCLUDEPATH += <QMQTT>/qmqtt/build/include/qmqtt
LIBS += <QMQTT>/qmqtt/build/lib/libqmqtt.so

## Recibir mensajes

### Crear subscriber y conectar

quint16 port = 1883;
Subscriber* sub = new Subscriber(QHostAddress("127.0.0.1"), port,"test_topic",false);
sub->connectToHost();

### Recibir

se debe conectar la señal messageReceived de Subscriber a un slot propio

connect(subscriber_,
        SIGNAL(messageReceived(QString)),
        this,SLOT(mySlot(QString)));

void mySlot(QString msg){
    cout << "Mensaje recibido: " << msg.toStdString() << endl;
}

## Publicar mensajes

### Crear publisher y conectar

quint16 port = 1883;
Publisher* pub = new Publisher(QHostAddress("127.0.0.1"), port,"test_topic",false);
pub->connectToHost();

## Publicar
QString msg = "Hola!";
pub->publishOne(msg);






