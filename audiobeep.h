#ifndef _AudioBeep
#define _AudioBeep

#include <QtMultimedia/QAudioFormat>
#include <QtMultimedia/QAudioDeviceInfo>
#include <QtMultimedia/QAudioOutput>
#include <QDebug>
#include <QBuffer>

class AudioBeep : public QObject {

	Q_OBJECT

public:
	AudioBeep(QObject *w, qreal beepDuration = 1.0, qreal beepFreq = 1000);

public slots:
	void play();

private:
	QObject* qparent;

	qreal sampleRate = 48000;   // sample rate
	qreal duration = 1.000;     // duration in seconds
	qreal frequency = 1000;     // frequency

	QByteArray byteBuffer;
};

#endif
