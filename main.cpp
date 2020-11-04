#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
vector<int> inter;
string opc;
int main()
{

    do
    {
        cout << left;
        cout << "1) Agregar al inicio" << endl;
        cout << "2) Mostrar data" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Mostrar Frente" << endl;
        cout << "5) Mostrar ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar " << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Elimina el ultimo" << endl;
        cout << "0) salir" << endl;
        getline(cin, opc);

        if (opc == "1")
        {
            int ent;
            cout << "entero:";
            cin >> ent;
            cin.ignore();

            inter.push_back(ent);
        }

        else if (opc == "2")
        {
            for (size_t i = 0; i < inter.size(); i++)
            {
                cout << inter[i] << ",";
            }
            cout << endl;
        }

        else if (opc == "3")
        {
            size_t n;
            int entero;
            cout << "tamanio:" << endl;
            cin >> n;
            cout << "entero" << endl;
            cin >> entero;
            cin.ignore();

            inter = vector<int>(n, entero);
        }

        else if (opc == "4")
        {
            if (inter.empty())
            {
                cout << "esta vacio" << endl;
            }

            cout << inter.front() << endl;
        }

        else if (opc == "5")
        {
            if (inter.empty())
            {
                cout << "esta vacio" << endl;
            }

            cout << inter.back() << endl;
        }

        else if (opc == "6")
        {
            sort(inter.begin(), inter.end(), greater<int>());
        }

        else if (opc == "7")
        {
            size_t pos;
            int entero;
            cout << "posicion: " << endl;
            cin >> pos;
            cout << "entero a ingresar" << endl;
            cin >> entero;
            cin.ignore();
            if (pos >= inter.size())
            {
                cout << "posicion invalida" << endl;
            }
            else
            {
                inter.insert(inter.begin() + pos, entero);
            }
        }

        else if (opc == "8")
        {
            int pos;
            cout << "borrar en posicion" << endl;
            cin >> pos;
            cin.ignore();
            if (pos >= inter.size())
            {
                cout << "posicion invalida" << endl;
            }
            else
            {
                inter.erase(inter.begin() + pos);
            }
        }
        else if (opc == "9")
        {
            if (inter.empty())
            {
                cout << "posicion invalida" << endl;
            }
            else
            {
                inter.pop_back();
            }
        }

        else if (opc == "0")
        {
            break;
        }

    } while (true);

    return 0;
}