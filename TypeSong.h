#ifndef TypeSong_h
#define TypeSong_h

class TypeSong
{ 
public:
    const int N_canciones=12;
    string canciones[12] = {
        "Himno Nacional Mexicano", "La Chona", "Cien anos",
        "Una Cunumi Parte Faraon", "Turtle Persian song", "Globglogabgalab",
        "Taquero mamon", "botella tras botella", "El envidioso",
        "Pa Panamericano", "Tequila", "Frijolero"
    };
    string letra[12] = {
        "Mexicanos, al grito de guerra \nEl acero aprestad y el bridon,Y retiemble en sus centros la tierra \nAl sonoro rugir del canon \nCina Oh Patria! tus sienes de oliva \nDe la paz el arcangel divino, \nQue en el cielo tu eterno destino \nPor el dedo de Dios se escribio. \nMas si osare un extrano enemigo \nProfanar con su planta tu suelo, \nPiensa Oh Patria querida! que el cielo \nUn soldado en cada hijo te dio. \nCina Oh Patria! tus sienes de oliva \nDe la paz el arcangel divino, \nQue en el cielo tu eterno destino \nPor el dedo de Dios se escribio. \nMas si osare un extrano enemigo \nProfanar con su planta tu suelo, \nPiensa Oh Patria querida! que el cielo \nUn soldado en cada hijo te dio. \nGuerra, guerra sin tregua al que intente \nDe la patria manchar los blasones!, \nGuerra, guerra! \nlos patrios pendones \nEn las olas de sangre empapad. \nGuerra, guerra! en el monte, en \nel valle, \nLos canones horrisonos truenen \nY los ecos sonoros resuenen \nCon las voces de Union! Libertad!",
        "Y arriba yo mi apa y la chona \nContare la historia de una famosa persona \nTodos la conocen con el apodo de chona \nTodos la conocen con el apodo de chona \nSu marido dice ya no se que hacer con ella \nDiario va a los bailes y se compra una botella \nDiario va a los bailes y se compra una botella \nSe arranca la banda con la primera cancion \nY la chona luego luego busca bailador \nY la chona luego luego busca bailador \nLa gente la mira y le empieza gritar \nBravo bravo chona nadie te puede igualar \nBravo bravo chona nadie te puede igualar \nY la chona se mueve, y la gente le grita \nNo hay mejor que la chona, para la quebradita \nY la chona se mueve, al ritmo que le toquen \nElla baila de todo, nunca pierde su trote \nY gozamelo digamos \nContare la historia de una famosa persona \nTodos la conocen con el apodo de chona \nTodos la conocen con el apodo de chona \nSu marido dice ya no se que hacer con ella \nDiario va a los bailes y se compra una botella \nDiario va a los bailes y se compra una botella \nSe arranca la banda con la primera cancion \nY la chona luego luego busca bailador \nY la chona luego luego busca bailador \nLa gente la mira y le empieza gritar \nBravo bravo chona nadie te puede igualar \nBravo bravo chona nadie te puede igualar \nY la chona se mueve, y la gente le grita \nNo hay mejor que la chona, para la quebradita \nY la chona se mueve, al ritmo que le toquen \nElla baila de todo, nunca pierde su trote \nRitmo y sabor los Tucanes de Tijuana \nY la chona se mueve, y la gente le grita \nNo hay mejor que la chona, para la quebradita \nY la chona se mueve, al ritmo que le toquen \nElla baila de todo, nunca pierde su trote \n",
        "Pasaste a mi lado \nCon gran indiferencia \nTus ojos ni siquiera \nVoltearon hacia mi \nTe vi sin que me vieras \n Te hable sin que me oyeras \nY toda mi amargura \nSe ahogo dentro de mi \n Me duele hasta la vida \nSaber que me olvidaste \nPensar que ni desprecios \nMerezca, yo, de ti \nY, sin embargo, sigues \nUnida a mi existencia \nY si vivo cien anos \nCien anos, pienso en ti \nPasaste a mi lado \nCon gran indiferencia \nTus ojos ni siquiera \nVoltearon hacia mi \nTe vi sin que me vieras \nTe hable sin que me oyeras \nY toda mi amargura \nSe ahogo dentro de mi \nMe duele hasta la vida \nSaber que me olvidaste \nPensar que ni desprecios \nMerezca, yo, de ti \nY, sin embargo, sigues \nUnida a mi existencia \nY si vivo cien anos \nCien anos, pienso en ti \n",
        "Una cunumi, una cunumi \nElla salio del pana, eh, le gusta la marihuana \nElla quiere que la ponga en cuatro \nComo la perra que es, mi cunumi \nQue le ordene las tetitas, ue le de duro por la boca y la oreja \nY le rompa ese culo y la boca con mi verga \nYo le digo: Mueve ese culo \nHara que mi esperma se me salga \nEn tu cara y en tus ojos, mi cunumi \nChupalo, botalo, perra cunumi \nMira como Faraon Love Shady lo disfruta \nArro-arrodilla, y chupa mi verga, cunumi \nTodo el placer que yo siento \nCuando me lo chupas, puta cunumi \nTienes 19, toma verga, hija de puta \nYo se que a ti te encanta y se feliz \nQue le ordene las tetitas, que le den duro \nPor la boca y la oreja y le rompa ese culo \n",
        "Midunesti nane, nane nane, sarebazi bade, bade bade, morakhazish kame, kame kame, nanek�o mano zayidi, to ke dahane mano gayidi \nmidunesti nane, bozorg misham, sarebazi miram, chera dadi to shiram,nazashti man bemiram \nSarbazamo, sarebazi baram ye moshdekhake, hamin daru nadaram, faghad yikdune pake, sarbaz do�m gelime pare, shabra sar miyare \nKalogh par, pa morghe, basash farghinadare!",
        "I'm the Globglogabgalab, I love books \nAnd this basement is a true treasure trove \nI am the Glob-glo-gab-galab \nThe shwabble-dabble-wabble-gabble flibba blabba blab \nI�m full of shwibbly liber-kind \nI am the yeast of thoughts and minds \nShwabble dabble glibble glabble schribble shwap glab \nDibble dabble shribble shrabble glibbi-glap shwap \nShwabble dabble glibble glabble shwibble shwap-dap \nDibble dabble shribble shrabble glibbi-shwap glab \nOoh, ha ha ha, mmm, splendid \nSimply delicious \nOhm, ha ha ha ha \nI am the Glob-glo-gab-galab \nThe shwabble-dabble-wabble-gabble flibba blabba blab \nI�m full of shwibbly liber-kind \nI am the yeast of thoughts and minds \nShwabble dabble glibble glabble schribble shwap glab \nDibble dabble shribble shrabble glibbi-glap shwap \nShwabble dabble glibble glabble shwibble shwap-dap \nDibble dabble shribble shrabble glibbi-shwap glab",
        "Esta es la historia de un bato que se levanta y se va a unos tacos \nBuenos tardes me da dos tacos de asada por favor \nDiras buenos dias apenas son las ocho \nAh disculpe usted senor mesero \nNo soy mesero, soy el taquero \nAh bueno me da dos de asada por favor \nNo hay de asada, nomas de buche \nAh bueno pues me da dos de buche \nNo se puede, no hay tortillas \nBueno, me lavare las manos y esperare \nNo hay bano, nomas hay tacos \nAh bueno me da tres para llevar \nYa te dije, que no hay tortillas \nBueno donde puedo lavarme las manos? \nYa te dije, aqui no hay bano \nBueno al menos un agua de horchata no? \nNo hay horchata, nomas Jamaica \nBueno dame un pinche agua de Jamaica \nEsta caliente, y no hay hielo \nBueno me sentare en la silla y esperare las tortillas \nEsta mojada, le cayo horchata \nBueno me recargare en la pared a esperar las tortillas \nEsta recien pintada, no se puede \nBueno me sentare en la banqueta pues \nAhi hay hormigas, por la cabreria \nAh bueno pues dame, dame diez de cabreria \nYa te dije, que no hay tortillas \nNo dijiste que tenias cabreria cabron? \nSe la comieron, las hormigas \nBueno dame lo que sea de comer \nNomas te aviso, que no hay tortillas \nBueno al menos un sandwich, no se, lo que sea \nNo vendemos sandwich, nomas tacos de buche \nBueno asi dame los tacos sin tortilla que tiene \nNo se puede, abrimos hasta las nueve \nComo que abren hasta las nueve? \nAqui enseguida, abren a las siete \nAh bueno ya ya ya pues muchas gracias por tus tacos, por tu horchata \nDe nada, vuelva pronto \nChinga tu madre pinche mesero! \nYa te dije, no soy mesero, soy el taquero... Y abro a las nueve",
        "Botella tras botella ando tomando \nPa' olvidarme de ella \nDe ella, de ella nomas hablo \nEn todas mis pedas \nA mis compas bien hartos traigo ya \nMe dicen: g�ey, ya la tienes que superar \nPero yo no puedo \nPa' ser sinceros, yo ni quiero \nMejor su recuerdo me lo bebo \nLos tragos me saben mejor asi \nEstaba pensando en llamarte, yo te miro por todas partes \nPero ya no nos vemos, puede que lo olvidemos \nDos tragos y vuelvo a pensarte \nMe aferro, no quiero olvidarte \nSentimientos ajenos, los celos no son buenos \nY si me llamas contesto, aunque nunca va a pasar eso \nYa mejor ni te molesto, porque se que vuelvo a joderlo \nY ahora que ando tomando bebida \nMe siento triste, ya va a amanecer \nA veces borracho las penan se olvidan \nPero nunca te deje de querer \nFui mal partido, querida \nTodas mis pedas marcandote al cel \nLe puse sal a la herida \nComo quisiera volver al ayer \nSentimental yo me pongo, siempre me acuerdo de ti \nMe agarra la depre seguido y hasta te escribi un CD \nBotella tras botella voy a tomarme \nPa' acordarme de ella \nDe ella, de ella estoy hablando \nComo siempre en mis pedas \nA mis compas bien hartos traigo ya \nMe dicen: g�ey, ya la tienes que superar \nPero yo no puedo \nPa' ser sinceros, yo ni quiero \nMejor su recuerdo me lo bebo \nLos tragos me saben mejor asi \nEstaba pensando en llamarte yo \nEstaba pensando en llamarte yo \nPero ya no nos vemos \nPero ya no nos vemos \nSentimental yo me pongo, siempre me acuerdo de ti \nMe agarra la depre seguido y hasta te escribi un CD \nY si amas a alguien, no la dejes ir \nPara que no tengas que dedicarle una cancion como esta \nPaz",
        "Pocas amistades, a la mas sincera la llevo en la lista \nPocos los amigos, los que me ayudaron y eso no se olvida \nLos que se pasaron, ahora vienen solos, es hipocresia \nNo quieren lo que tengo, quieren no lo tenga y eso es pura envidia \nYo no tengo nada, pero mi palabra vale mas que todo \nPara un buen amigo, siempre esta mi mano y esa vale oro \nA los que me aprecian, saben bien de sobra que estamos pa' todo \nY cuando se ocupe, si se ocupa Lupe, le damos con Tono \nY es que el envidioso es mas peligroso y no por su persona \nSegun son amigos, pero por la espalda, nunca te perdonan \nYo sigo en lo mio y no los ocupo ni pa' carcajadas \nAcuerdense que Kiko enviaba al Chavo y no tenia nada \nY a poco no \nAh, raza \nPuro Dos Carnales, senores \nY, al final, termina asi \nVoy para adelante y eso va dejando varios ofendidos \nAhora que se ofrecen, le dire una cosa a todos los ardidos \nQue si, en su momento, me brindaron algo estoy agradecido \nPero no fue dado bien que me chingaron y no fue un ratito \nNo estoy presumiendo ni fanfarroneando, ese no es mi estilo \nNomas les aclaro que no soy dejado ya que estoy al tiro \nEse no era el punto, pero aprovechando y cantando les digo \nQue soy buen amigo, pero tambien malo, si soy enemigo \nY es que el envidioso es mas peligroso y no por su persona \nSegun son amigos pero, por la espalda, nunca te perdonan \nYo sigo en lo mio y no los ocupo ni pa' carcajadas \nAcuerdense que Kiko enviaba al Chavo y no tenia nada",
        "We No Speak Americano \nYolanda Be Cool \nComme te po' \nComme te po' \nComme te po' capi chi te vo bene \nSi tu le parle 'mmiezzo americano? \nQuando se fa l'ammore sotto 'a luna \nCome te vene 'capa e di: I love you!? \nPa pa l' americano \nPa pa l' americano \nPa pa l' americano \nFa l' americano! \nPa pa l' americano \nFa fa l' americano \nWhisky soda e rockenroll \nWhisky soda e rockenroll \nWhisky soda e rockenroll \n",
        "Tequila! \nTequila! \nTequila!",
        "Yo ya estoy hasta la madre \nDe que me pongan sombrero \nEscucha entonces cuando digo \nNo me llames frijolero \nY aunque exista algun respeto \nY no metamos las narices \nNunca inflamos la moneda \nHaciendo guerra a otros paises \nTe pagamos con petroleo \nE intereses nuestra deuda \nMientras tanto no sabemos \nQuien se queda con la feria \nAunque nos hagan la fama \nDe que somos vendedores \nDe la droga que sembramos \nUstedes son consumidores \nDon't call me gringo \nYou fuckin' beaner \nStay on your side \nOf that goddamn river \nDon't call me gringo \nYou beaner \nNo me digas beaner \nMr. Punetero \nTe sacare un susto \nPor racista y culero \nNo me llames frijolero \nPinche gringo punetero \nNow I wish I had a dime \nFor every single time \nI've gotten stared down \nFor being in the wrong side of town \nAnd a rich man I'd be \nIf I had that kind of chips \nLately I wanna smack the mouths \nOf these racists \nPodras imaginarte desde afuera \nSer un mexicano cruzando la frontera \nPensando en tu familia mientras que pasas \nDejando todo lo que conoces atras \nSi tuvieras tu que esquivar las balas \nDe unos cuantos gringos rancheros \nLas seguiras diciendo good for nothing wetback? \nSi tuvieras tu que empezar de cero \nNow why don't you look down \nTo where your feet is planted \nThat U.S. soil that makes you take shit for granted \nIf not for Santa Ana, just to let you know \nThat where your feet are planted would be Mexico \nCorrecto! \nDon't call me gringo \nYou fuckin' beaner \nStay on your side \nOf that goddamn river \nDon't call me gringo \nYou beaner \nNo me digas beaner \nMr. Punetero \nTe sacare un susto \nPor racista y culero \nNo me llames frijolero \nPinche gringo punetero"
    };
    int dp[2000][2000];
    TypeSong(){
        forn(i, 2000) forn(j, 2000) dp[i][j] = -1;
    }
    int f(int i, int j, string &a, string &b){
        if(i==a.size() || j==b.size() ) return 0;
        int &ans = dp[i][j];
        if(ans!=-1) return ans;
        if(a[i]=='\n') return (ans = 1 + f(i+1, j, a, b));
        if(b[j]=='\n') b[j] = ' ';
        if(a[i]==b[j]) return (ans = 1 + f(i+1, j+1, a, b));
        return (ans = max(f(i+1, j, a, b), f(i, j+1, a, b)));
    }
    double parecido(string &a, string &b){
        for(int i=0; i < a.size(); i++) for(int j = 0; j < b.size(); j++) dp[i][j]=-1;
        int r = f(0,0, a, b);
        return (r*100.0)/(double)(a.size());
    }
     ~TypeSong()
    {
        cout << "Minigame Ended";
    }
};


#endif