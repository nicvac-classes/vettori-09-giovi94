#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  int i, n;

  cout << "Inserire il numero dei giri: " << endl;
  cin >> n;
  vector<float> hamilton(n);
  vector<float> verstappen(n);

  for (i = 0; i <= n - 1; i++) 
  {
    cout << "Inserisci il tempo del " << i + 1 << "° giro di Hamilton: ";
    cin >> hamilton[i];
    cout << "Inserisci il tempo del " << i + 1 << "° giro di Verstappen:";
    cin >> verstappen[i];
  }
  float tempoGaraH, tempoGaraV;
  tempoGaraH = 0;
  tempoGaraV = 0;
  for (i = 0; i <= n - 1; i++) 
  {
    tempoGaraH = tempoGaraH + hamilton[i];
    tempoGaraV = tempoGaraV + verstappen[i];
  }
  string vincitoreGara;
  if (tempoGaraH < tempoGaraV) 
  {
    vincitoreGara = "Hamilton";
  } 
  else 
  {
    vincitoreGara = "Verstappen";
  }
  cout << "Tempo Hamilton: " << tempoGaraH
       << ", tempo Verstappen: " << tempoGaraV << endl;
  cout << "Vincitore della gara: " << vincitoreGara << endl;
  float tMinV, tMinH;
  tMinV = verstappen[0];
  tMinH = hamilton[0];
  for (i = 0; i <= n - 1; i++) 
  {
    if (hamilton[i] < tMinH) 
    {
      tMinH = hamilton[i];
    }
    if (verstappen[i] < tMinV) 
    {
      tMinV = verstappen[i];
    }
  }
  if (tMinH < tMinV) 
  {
    vincitoreGara = "Hamilton";
  } 
  else 
  {
    vincitoreGara = "Verstappen";
  }
  cout << "Giro veloce Hamilton: " << tMinH
       << ", giro veloce Verstappen: " << tMinV << endl;
  cout << "Il giro più veloce è di " << vincitoreGara << endl;
}
