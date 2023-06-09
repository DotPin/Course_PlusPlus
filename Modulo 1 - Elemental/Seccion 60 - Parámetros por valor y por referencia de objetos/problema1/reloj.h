#ifndef RELOJ_H
#define RELOJ_H

class reloj{

        int hr, min, seg;
    public:
        reloj(int hora,int minuto, int segundo){
            this->hr = hora;
            this->min = minuto;
            this->seg = segundo;
        };
        void imprimir();
        bool iguales(reloj r);
    
};

#endif