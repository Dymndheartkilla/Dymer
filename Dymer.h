/*
  Dymer.h - Library i wrote with the help of an
  old man in Anacortes, WA
  Written March 8, 2025
  If you use it, think of me
  */
  
  #ifndef Dymer_h
  #define Dymer_h
  
  #include "Arduino.h"

  class Dymer {
    public:
            Dymer(unsigned long ms);  //constructor
      virtual ~Dymer();           //destructor

            void            setTime(unsigned long ms);
            void            start(void);
            unsigned long   currentMs(void);
            bool            beepBoop(void);

    private:
            unsigned long   startTime;
            unsigned long   waitTime;
  };

  #endif