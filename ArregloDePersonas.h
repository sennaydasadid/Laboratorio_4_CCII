
//#include "Persona.h"
class ArregloDePersonas{
private:
    Persona* ptrpers;
    int size;
    void redimensionar(int n);
public:
    ArregloDePersonas(const Persona personas[],const int tam);
    ArregloDePersonas(const ArregloDePersonas &o);
    ~ArregloDePersonas();
    
    void push_back(const Persona &p );
    void insert(const int posicion,const Persona &p);
    void remove(const int pos);
    const int getSize();
    void clear();
};