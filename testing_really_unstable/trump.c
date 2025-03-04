#include "stdio.h"
int vastaus = 314;
int main() {
  printf("Tässä pelissä pääset leikkimääm pressaa.\nNimesi on Donald Trump ja "
         "olet juuri voittanut vaalit toisen kerran.\nAiotko katkaista "
         "rikosten ketjun vai mitä on aikeenasi?\nAloitetaan peli!");

  printf(
      "Istut taas valkoisessa talossa ja vaihtoehdot ovat seuraavat \n 1 "
      "hyökkää tanskaan (gröönlanti) \n 2 eroa natosta \n 3 nosta tullimaksuja "
      "\n 4 Heitä ukraina bussin alle ja liittoudu venäjän kanssa \n 0 älä "
      "tee mitään \n 10 Eroa virastasi \n");
  scanf("%d", &vastaus);
  if (vastaus == 1) {
    printf(
        "Onneksi olkoon! sinut erotetaan natosta ja eu kääntyy sinua vastaan "
        "ja yhdysvaltoja vastaan pistetään pakotteita ja valtion talous "
        "kaatuu. \n HÄVISIT \n");
  }
  if (vastaus == 2) {
    printf("Kansa syöstää sinut vallasta. \n HÄVISIT \n");
  }
  if (vastaus == 3) {
    printf("Dollarin arvo laskee ja hintoihin tulee suuri korotus sekä talous "
           "tuhoutuu. Kansa syöstää sinut vallasta \n HÄVISIT \n");
  }
  if (vastaus == 4) {
    printf("Aloitit kolmannen maailmansodan! Onnittelut! Sinut tullaan "
           "muistamaan historiassa! \n");
  }
  if (vastaus == 0) {
    printf("Pressakautesi päättyy ja valtiota tulee kai viimeinkin johtamaan "
           "jokin järkevä. Voitit.\n ");
  }
  if (vastaus == 10) {

    printf("Olet toimillasi saattanut yhdysvallat niin huonoon jamaan että "
           "päätät erota ja antaa duunin jollekkin pätevälle \nKAIKKI "
           "VOITTI! \n");
  }
  if (vastaus == 314) {
    printf("opettele kirjoittamaan \n");
  }

  return 0;
}
