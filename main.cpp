#include <iostream>

using namespace std;

int main()
{

    int impbruto,impuesto,importe_neto;

    cout << "Ingrese una cantidad de importe: " << endl;
    cin>>impbruto;

    if(impbruto<0)
        {
        cout<<"no es valida, tiene que ser más"<<endl;
        }

    else
         if(impbruto>15000)
    {
        impuesto=impbruto*.16;
        importe_neto=impbruto+impuesto;
        cout<<"Su impuesto vendría siendo de: $"<< impuesto<<endl;
        cout<<"Su Importe neto total es de: $"<<importe_neto<<endl;
    }

        if(impbruto>=0 && impbruto<=15000)
    {
        impuesto=impbruto*.10;
        importe_neto=impbruto+impuesto;
        cout<<"Su impuesto vendría siendo de: $"<< impuesto<<endl;
        cout<<"Su Importe neto total es de: $"<<importe_neto<<endl;
    }

    return 0;
}
