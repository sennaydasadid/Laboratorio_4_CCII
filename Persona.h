class Persona{
private:
    string nombre;
    string apellido;
    int edad;
public:
    Persona();
    Persona(string nombre,string apellido ,int edad);
    string getNombre() ;
    string getApellido();
    int  getEdad();
    void setNombre(const string nombre);
    void setApellido(const string apellido);
    void setEdad(const int edad);
};

