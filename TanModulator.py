import numpy as np 
import matplotlib.pyplot as plt
np.a=2
print (np.a)
b=np.array
b=(1,2)
print (b)

def tan(freq, time_interval, rate, amp=1):
    w = 2. * np.pi * freq
    t = np.linspace(0, time_interval, time_interval*rate)
    y = amp*np.tan(w * t)
    return y

def tanmodulation():
    secs = 3
    Fs = 22100
    # frequency, duration, sampling rate, amplitude
    y1 = tan(0.5, secs, Fs, 10)
    y2 = tan(5, secs, Fs, 15)
    y3 = y1 * y2
    signals = [y1, y2, y3]
    results(signals, Fs, secs)

def results(signals, fs, secs):
        nrSigs = len(signals)
        fig = plt.figure()
        fig.subplots_adjust(hspace=.5)
        for i in range(len(signals)):
            cols=2
            pltIdc = []
            for col in range(1,cols+1):
                pltIdc.append(i*cols+col)
            s = signals[i]
            t = np.arange(0, secs, 1.0/fs)
            ax1 = plt.subplot(nrSigs, cols, pltIdc[0])
            ax1.set_title('signal')
            ax1.set_xlabel('time')
            ax1.set_ylabel('amplitude')
            ax1.plot(t, s)
        plt.show()

tanmodulation()

