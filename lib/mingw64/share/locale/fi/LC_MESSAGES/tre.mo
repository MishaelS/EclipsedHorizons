��            )   �      �     �     �  /   �  5   �  !   1     S     k     �     �     �     �  #   �     �               #     ,     5  u   C  7   �     �         	  &        C     `     z  (   �  �   �  ~  �     -	     M	  0   [	  9   �	  #   �	     �	     
      
     @
     X
     k
  )   �
     �
     �
     �
     �
  (   �
       �     <   �  "   ,  5  O     �  /   �     �     �       5     {  K                                                                                    
                                                 	    %s: invalid option --%s
 (standard input) Cannot use -B when reading from standard input. Copyright (c) 2001-2009 Ville Laurikari <vl@iki.fi>.
 Error in record delimiter pattern Error in search pattern Error reading from %s: %s
 Invalid back reference Invalid character range Invalid contents of {} Invalid regexp Invalid use of repetition operators Missing ')' Missing ']' Missing '}' No error No match Out of memory PATTERN is a POSIX extended regular expression (ERE) with the TRE extensions.
See tre(7) for a complete description.
 Record delimiter pattern must not match an empty string Report bugs to:  Searches for approximate matches of PATTERN in each FILE or standard input.
Example: `%s -2 optimize foo.txt' outputs all lines in file `foo.txt' that
match "optimize" within two errors.  E.g. lines which contain "optimise",
"optmise", and "opitmize" all match.
 Trailing backslash Try `%s --help' for more information.
 Unknown character class name Unknown collating element Unknown error Usage: %s [OPTION]... PATTERN [FILE]...
 With no FILE, or when FILE is -, reads standard input.  If less than two
FILEs are given, -h is assumed.  Exit status is 0 if a match is found, 1 for
no match, and 2 if there were errors.  If -E or -# is not specified, only
exact matches are selected.
 Project-Id-Version: TRE 0.7.4
Report-Msgid-Bugs-To: tre-general@lists.laurikari.net
PO-Revision-Date: 2002-07-29 23:46+0300
Last-Translator: Ville Laurikari <vl@iki.fi>
Language-Team: Finnish <translation-team-fi@lists.sourceforge.net>
Language: fi
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
 %s: virheellinen valitsin --%s
 (vakiosyöte) Vakiosyötteestä luettaessa -B ei ole sallittu. Tekijänoikeus © 2001-2009 Ville Laurikari <vl@iki.fi>.
 Virhe tietueiden erotinlausekkeessa Virhe hakulausekkeessa Ei voi lukea kohteesta %s: %s
 Virheellinen osalausekeviittaus Virheellinen merkkialue Virhe {} sisällä Virheellinen lauseke Virheellinen toisto-operaattorin käyttö Puuttuva ')' Puuttuva ']' Puuttuva '}' Ei virhettä Hakulausekkeen esiintymää ei löytynyt Muisti loppu HAKULAUSEKE on POSIXin määrittelemä laajennettu säännöllinen lauseke (engl. 
extended regular expression).  Lisäksi voidaan käyttää TRE:n laajennuksia.
Hakulausekkeiden täysimittainen kuvaus on tre(7):ssä.
 Tietueiden erotinlauseke ei saa sopia tyhjään merkkijonoon Raportoi virheistä osoitteeseen:  Etsii hakulausekkeen likimääräisiä esiintymiä tiedostoista tai vakiosyötteestä.
Esimerkki: `%s -2 lähteä foo.txt' palauttaa kaikki rivit tiedostossa
`foo.txt' joihin hakukaava "lähteä" sopii enintään kahdella virheellä.
Esimerkiksi rivit jotka sisältävät "lähtee" tai "lähtö" palautetaan.
 Lauseke loppuu kenoviivaan Kokeile `%s --help' saadaksesi lisää tietoa.
 Tuntematon merkkiluokka Tuntematon lajittuva merkki Tuntematon virhe Käyttö: %s [VALITSIN]... HAKULAUSEKE [TIEDOSTO]...
 Jos TIEDOSTOja ei ole annettu, tai jos TIEDOSTO on -, luetaan vakiosyötteestä.
Jos TIEDOSTOja on annettu vähemmän kuin kaksi, valitsin -h otetaan käyttöön
automaattisesti.  Paluukoodi on 0 jos hakukaavan esiintymiä löytyi, 1 jos
niitä ei löytynyt ja 2 jos tapahtui virhe.  Jos -E tai -# ei ole annettu,
vain tietueet jotka sopivat tarkasti hakulausekkeeseen valitaan.
 