#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
vector<string> stringu;
string opc;
int main()
{

    do
    {
        cout << left;
        cout << "1) Agregar al Final" << endl;
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
            string x;
            cout << "Palabra a ingresar:";
            getline(cin,x);
            fflush(stdin);

            stringu.push_back(x);
        }

        else if (opc == "2")
        {
            for (size_t i = 0; i < stringu.size(); i++)
            {
                cout << stringu[i] << ","<<endl;
            }
            cout << endl;
        }

        else if (opc == "3")
        {
            size_t n;
            string x;
            cout << "tamanio:" << endl;
            cin >> n;
            cout << "Palabra a insertar" << endl;
            fflush(stdin);
            getline(cin,x);
            

            stringu = vector<string>(n,x);
        }

        else if (opc == "4")
        {
            if (stringu.empty())
            {
                cout << "esta vacio" << endl;
            }

            cout << stringu.front() << endl;
        }

        else if (opc == "5")
        {
            if (stringu.empty())
            {
                cout << "esta vacio" << endl;
            }

            cout << stringu.back() << endl;
        }

        else if (opc == "6")
        {
            string opc2;
            cout << "1) ordenar de mayor a menor " << endl;
            cout << "2) ordenar de menor a mayor " << endl;
            cin >> opc2; cin.ignore();
            if (opc2 == "1")
            {
                sort(stringu.begin(), stringu.end(), greater<string>());
            }
            else if (opc2 == "2")
            {
                sort(stringu.begin(), stringu.end(),less<string>());
            }
        }

        else if (opc == "7")
        {
            size_t pos;
            string x;
            cout << "posicion: " << endl;
            cin >> pos;
            cout << "Palabra a ingresar" << endl;
            fflush(stdin);
            getline(cin,x);
            if (pos >= stringu.size())
            {
                cout << "posicion invalida" << endl;
                system("PAUSE");
            }
            else
            {
                stringu.insert(stringu.begin() + pos, x);
            }
        }

        else if (opc == "8")
        {
            int pos;
            cout << "borrar en posicion" << endl;
            cin >> pos;
            cin.ignore();
            if (pos >= stringu.size())
            {
                cout << "posicion invalida" << endl;
                break;
            }
            else
            {
                stringu.erase(stringu.begin() + pos);
            }
        }
        else if (opc == "9")
        {
            if (stringu.empty())
            {
                cout << "posicion invalida" << endl;
                break;
            }
            else
            {
                stringu.pop_back();
            }
        }

        else if (opc == "0")
        {
            break;
        }

    } while (true);

    return 0;
}
