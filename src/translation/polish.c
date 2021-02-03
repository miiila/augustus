#include "translation/common.h"
#include "translation/translation.h"

static translation_string all_strings[] = {
    {TR_NO_PATCH_TITLE, "Patch 1.0.1.0 nie jest zainstalowany"},
    {TR_NO_PATCH_MESSAGE,
        "Twoja instalacja Cezara 3 nie ma zainstalowanej łatki 1.0.1.0."
        "Łatkę możesz pobrać z:\n."
        URL_PATCHES "\n"
        "Kontynuujesz na własne ryzyko."},
    {TR_MISSING_FONTS_TITLE, "Brakuje czcionek"},
    {TR_MISSING_FONTS_MESSAGE,
        "Twoja instalacja Cezara 3 wymaga dodatkowych czcionek."
        "Możesz je pobrać dla własnego języka z:\n"
        URL_PATCHES},
    {TR_NO_EDITOR_TITLE, "Edytor nie jest zainstalowany"},
    {TR_NO_EDITOR_MESSAGE,
        "Twoja instalacja Cezara 3 nie ma plików edytora"
        "Możesz je pobrać z:\n"
        URL_EDITOR},
    {TR_INVALID_LANGUAGE_TITLE, "Nieprawidłowy folder językowy"},
    {TR_INVALID_LANGUAGE_MESSAGE,
        "Wybrany folder nie zawiera poprawnego pakietu językowego"
        "Proszę sprawdzić błędy w pliku log"},
    {TR_BUILD_ALL_TEMPLES, "Całość"},
    {TR_BUTTON_OK, "OK"},
    {TR_BUTTON_CANCEL, "Anuluj"},
    {TR_BUTTON_RESET_DEFAULTS, "Ustaw domyślne"},
    {TR_BUTTON_CONFIGURE_HOTKEYS, "Skróty klawiszowe"},
    {TR_CONFIG_LANGUAGE_LABEL, "Język:"},
    {TR_CONFIG_LANGUAGE_DEFAULT, "(domyślny)"},
    {TR_CONFIG_DISPLAY_SCALE, "Skala wyświetlacza:"},
    {TR_CONFIG_CURSOR_SCALE, "Skala kursora:"},
    {TR_CONFIG_HEADER_UI_CHANGES, "Zmiany interfejsu użytkownika"},
    {TR_CONFIG_HEADER_GAMEPLAY_CHANGES, "Poziom trudności"},
    {TR_CONFIG_SHOW_INTRO_VIDEO, "Odgrywaj film wprowadzający"},
    {TR_CONFIG_SIDEBAR_INFO, "Dodatkowe informacje w panelu sterowania"},
    {TR_CONFIG_SMOOTH_SCROLLING, "Płynne przewijanie"},
    {TR_CONFIG_DISABLE_RIGHT_CLICK_MAP_DRAG, "Wyłącz przeciąganie mapy prawym przyciskiem"},
    {TR_CONFIG_VISUAL_FEEDBACK_ON_DELETE, "Pokaż wybrany obszar przy oczyszczaniu terenu"},
    {TR_CONFIG_ALLOW_CYCLING_TEMPLES, "Pozwól na budowę kolejno każdej ze świątyń"},
    {TR_CONFIG_SHOW_WATER_STRUCTURE_RANGE, "Pokaż zasięg przy budowie rezerwuarów, fontann i studni"},
    {TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Pokaż rozmiar budowy przy przeciąganiu kursorem"},
    {TR_CONFIG_HIGHLIGHT_LEGIONS, "Podświetl legion przy najechaniu kursorem"},
    {TR_CONFIG_SHOW_MILITARY_SIDEBAR, "Włącz boczny panel wojskowy"},
    {TR_CONFIG_FIX_IMMIGRATION_BUG, "Napraw błąd z imigrację na najwyższym poziomie trudności"},
    {TR_CONFIG_FIX_100_YEAR_GHOSTS, "Napraw 100-letnie duchy"},
    {TR_CONFIG_FIX_EDITOR_EVENTS, "Napraw zmianę imperatora i czas przetrwania w konstruktorze miast"},
    {TR_HOTKEY_TITLE, "Augustus - konfiguracja skrótów klawiszowych"},
    {TR_HOTKEY_LABEL, "Skrót klawiszowy"},
    {TR_HOTKEY_ALTERNATIVE_LABEL, "Alternatywny"},
    {TR_HOTKEY_HEADER_ARROWS, "Strzałki kierunkowe"},
    {TR_HOTKEY_HEADER_GLOBAL, "Globalne skróty klawiszowe"},
    {TR_HOTKEY_HEADER_CITY, "Miejskie skróty klawiszowe"},
    {TR_HOTKEY_HEADER_ADVISORS, "Doradcy"},
    {TR_HOTKEY_HEADER_OVERLAYS, "Widoki"},
    {TR_HOTKEY_HEADER_BOOKMARKS, "Miejskie miejsca skoku"},
    {TR_HOTKEY_HEADER_EDITOR, "Edytor"},
    {TR_HOTKEY_HEADER_BUILD, "Skróty klawiszowe budynków"},
    {TR_HOTKEY_ARROW_UP, "Góra"},
    {TR_HOTKEY_ARROW_DOWN, "Dół"},
    {TR_HOTKEY_ARROW_LEFT, "Lewo"},
    {TR_HOTKEY_ARROW_RIGHT, "Prawo"},
    {TR_HOTKEY_TOGGLE_FULLSCREEN, "Przełącz pełny ekran"},
    {TR_HOTKEY_CENTER_WINDOW, "Wycentruj okno"},
    {TR_HOTKEY_RESIZE_TO_640, "Zmień rozmiar okna do 640x480"},
    {TR_HOTKEY_RESIZE_TO_800, "Zmień rozmiar okna do 800x600"},
    {TR_HOTKEY_RESIZE_TO_1024, "Zmień rozmiar okna do 1024x768"},
    {TR_HOTKEY_SAVE_SCREENSHOT, "Zapisz zrzut ekranu"},
    {TR_HOTKEY_SAVE_CITY_SCREENSHOT, "Zapisz zrzut ekranu miasta"},
    {TR_HOTKEY_BUILD_CLONE, "Sklonuj budynek pod kursorem"},
    {TR_HOTKEY_LOAD_FILE, "Wczytaj plik"},
    {TR_HOTKEY_SAVE_FILE, "Zapisz plik"},
    {TR_HOTKEY_INCREASE_GAME_SPEED, "Zwiększ prędkość gry"},
    {TR_HOTKEY_DECREASE_GAME_SPEED, "Zmniejsz prędkość gry"},
    {TR_HOTKEY_TOGGLE_PAUSE, "Pauza"},
    {TR_HOTKEY_CYCLE_LEGION, "Przełącz między legionami"},
    {TR_HOTKEY_ROTATE_MAP_LEFT, "Obróć mapę w lewo"},
    {TR_HOTKEY_ROTATE_MAP_RIGHT, "Obróć mapę w prawo"},
    {TR_HOTKEY_SHOW_ADVISOR_LABOR, "Doradca zatrudnienia"},
    {TR_HOTKEY_SHOW_ADVISOR_MILITARY, "Doradca legionów"},
    {TR_HOTKEY_SHOW_ADVISOR_IMPERIAL, "Doradca imperialny"},
    {TR_HOTKEY_SHOW_ADVISOR_RATINGS, "Doradca wyników"},
    {TR_HOTKEY_SHOW_ADVISOR_TRADE, "Doradca handlowy"},
    {TR_HOTKEY_SHOW_ADVISOR_POPULATION, "Doradca populacji"},
    {TR_HOTKEY_SHOW_ADVISOR_HEALTH, "Doradca zdrowia"},
    {TR_HOTKEY_SHOW_ADVISOR_EDUCATION, "Doradca edukacji"},
    {TR_HOTKEY_SHOW_ADVISOR_ENTERTAINMENT, "Doradca rozrywki"},
    {TR_HOTKEY_SHOW_ADVISOR_RELIGION, "Doradca religijny"},
    {TR_HOTKEY_SHOW_ADVISOR_FINANCIAL, "Doradca finansowy"},
    {TR_HOTKEY_SHOW_ADVISOR_CHIEF, "Główny doradca"},
    {TR_HOTKEY_TOGGLE_OVERLAY, "Przełącz między widokami"},
    {TR_HOTKEY_SHOW_OVERLAY_WATER, "Pokaż widok wody"},
    {TR_HOTKEY_SHOW_OVERLAY_FIRE, "Pokaż widok pożarów"},
    {TR_HOTKEY_SHOW_OVERLAY_DAMAGE, "Pokaż widok zniszczenia"},
    {TR_HOTKEY_SHOW_OVERLAY_CRIME, "Pokaż widok zbrodni"},
    {TR_HOTKEY_SHOW_OVERLAY_PROBLEMS, "Pokaż widok problemów"},
    {TR_HOTKEY_GO_TO_BOOKMARK_1, "Przejdź do punktu skoku 1"},
    {TR_HOTKEY_GO_TO_BOOKMARK_2, "Przejdź do punktu skoku 2"},
    {TR_HOTKEY_GO_TO_BOOKMARK_3, "Przejdź do punktu skoku 3"},
    {TR_HOTKEY_GO_TO_BOOKMARK_4, "Przejdź do punktu skoku 4"},
    {TR_HOTKEY_SET_BOOKMARK_1, "Ustaw punkt skoku 1"},
    {TR_HOTKEY_SET_BOOKMARK_2, "Ustaw punkt skoku 2"},
    {TR_HOTKEY_SET_BOOKMARK_3, "Ustaw punkt skoku 3"},
    {TR_HOTKEY_SET_BOOKMARK_4, "Ustaw punkt skoku 4"},
    {TR_HOTKEY_EDITOR_TOGGLE_BATTLE_INFO, "Przełącz informacje o bitwach"},
    {TR_HOTKEY_EDIT_TITLE, "Wprowadź skrót"},
    {TR_BUILDING_ROADBLOCK, "Blokada drogi"},
    {TR_BUILDING_ROADBLOCK_DESC, "Blokada drogi zatrzymuje przechodniów bez celu."},
    {TR_HEADER_HOUSING, "Domy"},
    {TR_ADVISOR_HOUSING_ROOM, "W miejskich domach jest miejsce dla"},
    {TR_ADVISOR_HOUSING_NO_ROOM, "Brak miejsca w miejskich domach."},
    {TR_ADVISOR_RESIDENCES_DEMANDING_POTTERY, "Domy wymagające garnków"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_FURNITURE, "Domy wymagające mebli"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_OIL, "Domy wymagające oliwy"},
    {TR_ADVISOR_RESIDENCES_DEMANDING_WINE, "Domy wymagające wina"},
    {TR_ADVISOR_TOTAL_NUM_HOUSES, "Razem domów:"},
    {TR_ADVISOR_AVAILABLE_HOUSING_CAPACITY, "Dostępne zakwaterowanie:"},
    {TR_ADVISOR_TOTAL_HOUSING_CAPACITY, "Całkowite zakwaterowanie:"},
    {TR_ADVISOR_ADVISOR_HEADER_HOUSING, "Populacja - domy"},
    {TR_ADVISOR_BUTTON_GRAPHS, "Wykresy"},
    {TR_ADVISOR_HOUSING_PROSPERITY_RATING, "Bogactwo domów"},
    {TR_ADVISOR_PERCENTAGE_IN_VILLAS_PALACES, "Procent populacji w willach i pałacach"},
    {TR_ADVISOR_PERCENTAGE_IN_TENTS_SHACKS, "Procent populacji w namiotach i szałasach"},
    {TR_ADVISOR_AVERAGE_TAX, "Średni podatek na głowę"},
    {TR_ADVISOR_AVERAGE_AGE, "Średnia wieku populacji"},
    {TR_ADVISOR_PERCENT_IN_WORKFORCE, "Procent populacji w sile roboczej"},
    {TR_ADVISOR_BIRTHS_LAST_YEAR, "Narodzin w zeszłym roku:"},
    {TR_ADVISOR_DEATHS_LAST_YEAR, "Śmierci w zeszłym roku:"},
    {TR_ADVISOR_TOTAL_POPULATION, "Razem mieszkańców"},
    { TR_BUTTON_NEXT, "+" },
    { TR_BUTTON_PREV, "-" },
    { TR_CONFIG_TITLE, "Augustus - konfiguracja" },
    { TR_CONFIG_PAGE_LABEL, "Strona" },
    { TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Pokaż rozmiar budowy przy przeciąganiu budowy" },
    { TR_CONFIG_ROTATE_MANUALLY, "Obróć bramy i łuk triumfalny skrótem klawiszowym" },
    { TR_CONFIG_DRAW_WALKER_WAYPOINTS, "Pokaż punkty docelowe" },
    { TR_CONFIG_ENABLE_ZOOM, "Włącz powiększanie/pomniejszanie (może być powolne, wymaga więcej pamięci)" },
    { TR_CONFIG_COMPLETE_RATING_COLUMNS, "Pokaż całe kolumny przy niskich poziomach wyników" },
    { TR_CONFIG_GRANDFESTIVAL, "Wielkie festiwale pozwalają na dodatkowe błogosławieństwo" },
    { TR_CONFIG_JEALOUS_GODS, "Wyłącz zazdrość bogów" },
    { TR_CONFIG_GLOBAL_LABOUR, "Włącz globalne zatrudnienie" },
    { TR_CONFIG_SCHOOL_WALKERS, "Wydłuż drogę uczniów szkół" },
    { TR_CONFIG_RETIRE_AT_60, "Zmień wiek emerytalny z 50 na 60" },
    { TR_CONFIG_FIXED_WORKERS, "Stały procent zatrudnionych - 38%" },
    { TR_CONFIG_EXTRA_FORTS, "Zezwól na budowę dodatkowych 4 fortów" },
    { TR_CONFIG_WOLVES_BLOCK, "Zablokuj budowę w pobliżu wilków" },
    { TR_CONFIG_DYNAMIC_GRANARIES, "Zablokuj niepołączenie drogi spichlerzy" },
    { TR_CONFIG_MORE_STOCKPILE, "Domy gromadzą więcej dóbr ze straganu" },
    { TR_CONFIG_NO_BUYER_DISTRIBUTION, "Kupujące panie ze straganu nie rozdają dóbr" },
    { TR_CONFIG_IMMEDIATELY_DELETE_BUILDINGS, "Natychmiast niszcz budynki" },
    { TR_CONFIG_GETTING_GRANARIES_GO_OFFROAD, "Popychacze wozów ze zbierających spichlrzy mogą schodzić z dróg" },
    { TR_CONFIG_GRANARIES_GET_DOUBLE, "Podwój pojemność zbierająych popychaczy wozów ze spichlerzy" },
    { TR_CONFIG_TOWER_SENTRIES_GO_OFFROAD, "Setnicy z wież mogą schodzić z dróg" },
    { TR_CONFIG_FARMS_DELIVER_CLOSE, "Farmy i przystanie dostarczają żywność tylko do pobliskich spichlerzy" },
    { TR_CONFIG_DELIVER_ONLY_TO_ACCEPTING_GRANARIES, "Jedzenie nie jest dostarczane do zbierających spichlerzy" },
    { TR_CONFIG_ALL_HOUSES_MERGE, "Wszystkie domy mogą się łączyć" },
    { TR_CONFIG_WINE_COUNTS_IF_OPEN_TRADE_ROUTE, "Otwarty szlak handlowy liczy się jako nowy rodzaj wina" },
    { TR_CONFIG_RANDOM_COLLAPSES_TAKE_MONEY, "Losowo upadające glinianki i kopalnie żelaza zabierają zamiast tego trochę pieniędzy" },
    { TR_CONFIG_MULTIPLE_BARRACKS, "Zezwól na budowę wielu koszar" },
    { TR_CONFIG_NOT_ACCEPTING_WAREHOUSES, "Hurtownie nie akceptują żadnych dóbr przy zbudowaniu" },
    { TR_CONFIG_HOUSES_DONT_EXPAND_INTO_GARDENS, "Domy nie zajmują ogrodów przy powiększaniu" },
    { TR_BUILDING_ROADBLOCK, "Blokada drogi" },
    { TR_BUILDING_ROADBLOCK_DESC, "Blokada drogi powstrzymuje wałęsających się mieszkańców." },
    { TR_BUILDING_ARCHITECT_GUILD, "Gildia inżynierów" },
    { TR_BUILDING_ARCHITECT_GUILD_DESC, "Inżynierowie niestrudzenie pracują, by zbudować monumenty ku chwale Rzymu." },
    { TR_BUILDING_GRAND_TEMPLE_ADD_MODULE, "Nadaj epitet świątyni" },
    { TR_BUILDING_GRAND_TEMPLE_CERES, "Dom Ceres" },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE, "Dom Neptuna" },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY, "Dom Merkurego" },
    { TR_BUILDING_GRAND_TEMPLE_MARS, "Dom Marsa" },
    { TR_BUILDING_GRAND_TEMPLE_VENUS, "Dom Wenus" },
    { TR_BUILDING_PANTHEON, "Panteon" },
    { TR_BUILDING_GRAND_TEMPLE_CERES_DESC, "Wielka świątynia Ceres" },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC, "Wielka świątynia Neptuna" },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC, "Wielka świątynia Merkurego" },
    { TR_BUILDING_GRAND_TEMPLE_MARS_DESC, "Wielka świątynia Marsa" },
    { TR_BUILDING_GRAND_TEMPLE_VENUS_DESC, "Wielka świątynia Wenus" },
    { TR_BUILDING_PANTHEON_DESC, "Panteon" },
    { TR_BUILDING_GRAND_TEMPLE_CERES_BONUS_DESC, "Popychacze wozów z farm poruszają się o 50% szybciej." },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE_BONUS_DESC, "Zwiększa zasięg fontann, studni i rezerwuarów. Zatrudnienie budowli wodnych zmniejszone o połowę. Statki handlowe poruszają się 25% szybciej." },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY_BONUS_DESC, "Handlarze lądowi i morscy mają zwiększoną pojemność o 50%. Handlarze lądowi poruszają się o 25% szybciej" },
    { TR_BUILDING_GRAND_TEMPLE_MARS_BONUS_DESC, "Szkoli żołnierzy jak koszary. Zezwala na budowę dodatkowych czterech fortów" },
    { TR_BUILDING_GRAND_TEMPLE_VENUS_BONUS_DESC, "Ogrody, świątynie i pomniki błyszczą dodatkowych pięknem, zwiększając atrakcyjność. Domy gromadzą więcej dóbr i wolniej dewoluują." },
    { TR_BUILDING_PANTHEON_BONUS_DESC, "Zapewnia dostęp do wszystkich bogów. Organizuje coroczne festiwale i redukuje żołd świątyń o 25%" },
    { TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_1_DESC, "Kapłani zmniejszają konsumpcję żywności o 20%." },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_1_DESC, "Świątynia wysyła woźniców do hipodromu." },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_1_DESC, "Kapłani redukują konsumpcję mebli i garnków o 20%." },
    { TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_1_DESC, "Świątynie generują żywność odwiedzając domy i wysyłają ją do punktu zaopatrzeniowego." },
    { TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_1_DESC, "Wielka świątynia produkuje wino zależne od rozmiaru miasta z dostępem do Wenus. Kapłani zbierają i rozdają to wino." },
    { TR_BUILDING_GRAND_TEMPLE_CERES_MODULE_2_DESC, "Kapłani zbierają i rozdają oliwę i jeden typ żywności." },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE_MODULE_2_DESC, "Kapłani zwiększają pojemność domów o 5%. Wielka świątynia działa jak wypełniony rezerwuar." },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY_MODULE_2_DESC, "Kapłani redukują zużycie oliwy i wina o 20%." },
    { TR_BUILDING_GRAND_TEMPLE_MARS_MODULE_2_DESC, "Kapłani redukują zużycie wszystkich dóbr o 10%." },
    { TR_BUILDING_GRAND_TEMPLE_VENUS_MODULE_2_DESC, "Kapłani zapewniają rozrywkę i zwiększają piękno domów, pozwalając ograniczyć potrzebę dodatkowych upiększeń." },
    { TR_BUILDING_PANTHEON_MODULE_1_DESC, "Wszystkie świątynie wysyłają swoich kapłanów do panteonu, szerząc wiarę w swoich bogów." },
    { TR_BUILDING_PANTHEON_MODULE_2_DESC, "Domy z dostępem do panteonu mogą rozwinąć się o dodatkowy krok." },
    { TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_1, "Świątynia Ceres Promitor" },
    { TR_BUILDING_GRAND_TEMPLE_CERES_DESC_MODULE_2, "Świątynia Ceres Reparator" },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_1, "Świątynia Neptunus Equester" },
    { TR_BUILDING_GRAND_TEMPLE_NEPTUNE_DESC_MODULE_2, "Świątynia Neptunus Adiutor" },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_1, "Świątynia Mercurius Fortunus" },
    { TR_BUILDING_GRAND_TEMPLE_MERCURY_DESC_MODULE_2, "Świątynia Mercurius Abundantia" },
    { TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_1, "Świątynia Mars Ultor" },
    { TR_BUILDING_GRAND_TEMPLE_MARS_DESC_MODULE_2, "Świątynia Mars Quirinus" },
    { TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_1, "Świątynia Venus Verticordia" },
    { TR_BUILDING_GRAND_TEMPLE_VENUS_DESC_MODULE_2, "Świątynia Venus Genetrix" },
    { TR_BUILDING_PANTHEON_DESC_MODULE_1, "Pantheum Ara Maxima" },
    { TR_BUILDING_PANTHEON_DESC_MODULE_2, "Pantheum Roma Aeterna" },
    { TR_BUILDING_GRAND_TEMPLE_MENU, "Wielka świątynia" },
    { TR_BUILDING_WORK_CAMP, "Obóz pracy" },
    { TR_BUILDING_WORK_CAMP_DESC, "Pracownicy zbierają się tutaj, by dostarczać materiałów do konstrukcji monumentów." },
    { TR_REQUIRED_RESOURCES, "Surowce potrzebne do ukończenia obecnej fazy:" },
    { TR_BUILDING_GRAND_TEMPLE_CONSTRUCTION_DESC, "Budowa wielkiej świątyni wymaga materiałów zgromadzonych w magazynie, pracowników z obozu pracy i inżynierów z obozu inżynierów." },
    { TR_CONSTRUCTION_PHASE, "Faza konstrukcji:" },
    { TR_ADD_MODULE, "Poświęcić świątynię?" },
    { TR_BUILDING_TEMPLE_MODULE_CONSTRUCTED, "Epitet nadany." },
    { TR_BUILDING_CERES_TEMPLE_QUOTE, "Pierwsza w skiby lemieszem kraje krzywym ziemię\nCeres i pierwsza zbożem darzy ludzkie plemię,\nPierwsza nadaje prawa. Jej to wszystko dary,\n Ja w śpiewie czcić, jej składać powinnam ofiary.\n-Owidiusz, Przemiany, Księga V" },
    { TR_BUILDING_NEPTUNE_TEMPLE_QUOTE, "I gniew morza ustaje. Neptun trójząb złożył,\nBystre wiatry uciszył i wody ukorzył.\nWoła Trytona — Tryton, wyższy nad bałwany\nPrzypływa; grzbiet ma siwy muszlami nadziany.\nPan morza w brzmiącą konchę dąć mu każe silnie\n-Owidiusz, Przemiany, Ksiegą I" },
    { TR_BUILDING_MERCURY_TEMPLE_QUOTE, "Można ci bowiem zabierać i woły i paśne bydlęta,\nŁupem pozyskać trójnogi i płowogrzywiaste rumaki,\nŻycie atoli człowieka zaborem napowrót nie wróci,\nAni też łupem, jak tylko uciecze przez zębów zaporę.\nMatka mi bowiem Thetyda o srebrnych nóżkach mówiła,\n-Homer, Iliada, księga IX" },
    { TR_BUILDING_MARS_TEMPLE_QUOTE, "Wtedy Mars, władny w boju, wlał ogień i siły,\nW Latynów serca, które wnet żywiej zabiły,\nZaś popłoch i strach zgubny rzucił w Teukrów rzędy.\nZyskawszy pole bitwy, wróg kupi się wszędy\nZa sprawą boga wojny.\n-Wirgliusz, Eneida, Księga IX" },
    { TR_BUILDING_VENUS_TEMPLE_QUOTE, "Wtedy niebian zjednawszy Wenus przymileniem,\nI Jowisza pieszczonem objąwszy ramieniem:\nOjcze, który me prośby wypełniałeś zawsze\n - Rzekła - dziś okaż dla mnie serce najłaskawsze\n-Owidiusz, Przemiany" },
    { TR_BUILDING_PANTHEON_QUOTE, "Tymczasem dom potężny Olimpu się budzi.\nZebranie zwoła niebian ojciec i król ludzi.\nDo gwieździstej siedziby, skąd cała kraina\nWidna, obóz Dardanów i ludy Latyna.,\nZasiędą przy otwartych bramach, on zaś zacznie.\n-Wirgiliusz, Eneida, Księga X" },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_1, "(Podium)" },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_2, "(Portico)" },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_3, "(Cella)" },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_4, "(Praecinctum)" },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_5, "(Dedicatio)" },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_1_TEXT, "Pracownicy konstruują podium, które wyniesie świątynie i zapewni trwałe fundamenty pozwalające znieść upływ czasu." },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_2_TEXT, "Rzemieślnicy tworzą portico, w którym znajdzie się świątynny ołtarz." },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_3_TEXT, "Inżynierowie tworzą cella, wnętrze świątyni które będzie domem do świętych obrazów." },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_4_TEXT, "Rozpoczęły się prace nad świątynnym praecinctum, gdzie wyznawcy będą się zbierać do rytuałów." },
    { TR_BUILDING_GRAND_TEMPLE_PHASE_5_TEXT, "Prace nad świątynią są prawie gotowe, kapłani zbierają się do konsekracji świątyni." },
    { TR_BUILDING_MENU_TREES, "Drzwi" },
    { TR_BUILDING_MENU_PATHS, "Ścieżki" },
    { TR_BUILDING_MENU_PARKS, "Parki" },
    { TR_BUILDING_SMALL_POND, "Mały staw" },
    { TR_BUILDING_LARGE_POND, "Duży staw" },
    { TR_BUILDING_PINE_TREE, "Sosna" },
    { TR_BUILDING_FIR_TREE, "Jodła" },
    { TR_BUILDING_OAK_TREE, "Dąb" },
    { TR_BUILDING_ELM_TREE, "Wiąz" },
    { TR_BUILDING_FIG_TREE, "Figowiec" },
    { TR_BUILDING_PLUM_TREE, "Śliwa" },
    { TR_BUILDING_PALM_TREE, "Palma" },
    { TR_BUILDING_DATE_TREE, "Daktyl" },
    { TR_BUILDING_PINE_PATH, "Ścieżka z sosanmi" },
    { TR_BUILDING_FIR_PATH, "Ścieżka z jodłami" },
    { TR_BUILDING_OAK_PATH, "Ścieżka z dębami" },
    { TR_BUILDING_ELM_PATH, "Ścieżka z więzami" },
    { TR_BUILDING_FIG_PATH, "Ścieżka z figami" },
    { TR_BUILDING_PLUM_PATH, "Ścieżka ze śliwami" },
    { TR_BUILDING_PALM_PATH, "Ścieżka z palmami" },
    { TR_BUILDING_DATE_PATH, "Ścieżka z daktylami" },
    { TR_BUILDING_BLUE_PAVILION, "Niebieski pawilon" },
    { TR_BUILDING_RED_PAVILION, "Czerwony pawilon" },
    { TR_BUILDING_ORANGE_PAVILION, "Pomarańczowy pawilon" },
    { TR_BUILDING_YELLOW_PAVILION, "Żółty pawilon" },
    { TR_BUILDING_GREEN_PAVILION, "Zielony pawilon" },
    { TR_BUILDING_SMALL_STATUE_ALT, "Posąg bogini" },
    { TR_BUILDING_SMALL_STATUE_ALT_B, "Posąg senatora" },
    { TR_BUILDING_OBELISK, "Obelisk" },
    { TR_BUILDING_POND_DESC, "Staw napełniony jest wodą z miejskich rezerwuarów i zapewnia wodą dla roślin i zwierząt, a także miejsce relaksu dla mieszkańców." },
    { TR_BUILDING_WINDOW_POND, "Staw" },
    { TR_BUILDING_OBELISK_DESC, "Wspaniały monument, wzniesiony przez starożytnego króla nilu. Egipcjanie z niego nie korzystali." },
    { TR_ADVISOR_FINANCE_LEVIES, "Żołd budynków" },
    { TR_CONFIRM_DELETE_MONUMENT, "Zniszczyć ten monument" },
    { TR_SELECT_EPITHET_PROMPT_HEADER, "Wybierz epitet do nadania" },
    { TR_SELECT_EPITHET_PROMPT_TEXT, "Nadanie epitetu trwale poświęci tę światynię temu aspektowi boga, nadając kapłanom boską moc. Będzie kosztować 1000 Dn." },
    { TR_BUILDING_INFO_MONTHLY_LEVY, "/miesiąc" },
    { TR_BUILDING_MESS_HALL, "Punkt zaopatrzenia" },
    { TR_BUILDING_MESS_HALL_DESC, "Punkt zaopatrzeniowy zabiera jedzenie ze spichlerzy by zapewniż pożywienie żołnierzom w miejskich fortach. Brak żywności spowolni rekrutację i osłabi morale." },
    { TR_BUILDING_MESS_HALL_FULFILLMENT, "Stan zaopatrzenia w zeszłym miesiącu:" },
    { TR_BUILDING_MESS_HALL_TROOP_HUNGER, "Żołnierze są: " },
    { TR_BUILDING_MESS_HALL_TROOP_HUNGER_1, "Dobrze odżywieni" },
    { TR_BUILDING_MESS_HALL_TROOP_HUNGER_2, "Odżywieni" },
    { TR_BUILDING_MESS_HALL_TROOP_HUNGER_3, "Głodni" },
    { TR_BUILDING_MESS_HALL_TROOP_HUNGER_4, "Bardzo głodni" },
    { TR_BUILDING_MESS_HALL_TROOP_HUNGER_5, "Umierają z głodu" },
    { TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_1, "Zróżnicowana dieta znacznie poprawia morale." },
    { TR_BUILDING_MESS_HALL_FOOD_TYPES_BONUS_2, "Pożywna i wielce zróżnicowana dieta ma wspaniały efekt na morale." },
    { TR_BUILDING_MESS_HALL_NO_SOLDIERS, "Nie masz żołnierzy do nakarmienia." },
    { TR_BUILDING_MESS_HALL_MONTHS_FOOD_STORED, "Zaopatrzenia starczy na miesięcy:" },
    { TR_BUILDING_BARRACKS_FOOD_WARNING, "Braki w żywności w punkcie zaopatrzeniowym spowalniają rekrutację." },
    { TR_BUILDING_BARRACKS_FOOD_WARNING_2, "Krytyczne braki w pożywieni w punkcie zaopatrzeniowym wielce spowalniają rekrutację." },
    { TR_BUILDING_LEGION_FOOD_WARNING_1, "Niedawne braki żywności osłabiły morale" },
    { TR_BUILDING_LEGION_FOOD_WARNING_2, "Niedawne braki żywności wielce osłabiły morale" },
    { TR_BUILDING_LEGION_STARVING, "Brak żywności" },
    { TR_ADVISOR_LEGION_FOOD_SATISFIED, "Twoi żołnierze mają jedzenie którego potrzebują." },
    { TR_ADVISOR_LEGION_FOOD_NEEDED, "Twoi żołnierze potrzebują więcej żywności." },
    { TR_ADVISOR_LEGION_FOOD_CRITICAL, "Twoi żołnierze umierają z głodu!" },
    { TR_ADVISOR_LEGION_MONTHS_FOOD_STORED, "Miesiące zaopatrzenia w żywność:" },
    { TR_CITY_MESSAGE_TITLE_MESS_HALL_NEEDS_FOOD, "Żołnierze są głodni" },
    { TR_CITY_MESSAGE_TEXT_MESS_HALL_NEEDS_FOOD, "Twój punkt zaopatrzeniowy krytycznie potrzebuje żywności. Zapewnij, aby miał dostęp do pełnego spichlerza." },
    { TR_CITY_MESSAGE_TEXT_MESS_HALL_MISSING, "Twoje miasto straciło punkt zaopatrzeniowy i twoi żołnierze głodują. Natychmiast zbuduj nowy." },
    { TR_MARKET_SPECIAL_ORDERS_HEADER, "Dobra do zebrania" },
    { TR_WARNING_NO_MESS_HALL, "Wpierw zbuduj punkt zaopatrzeniowy dla żołnierzy." },
    { TR_WARNING_MAX_GRAND_TEMPLES, "Można postawić tylko dwie wielkie świątynie." },
    { TR_CITY_MESSAGE_TITLE_GRAND_TEMPLE_COMPLETE, "Wielka świątynia ukończona" },
    { TR_CITY_MESSAGE_TEXT_GRAND_TEMPLE_COMPLETE, "Kapłani i wyznawcy tłumnie gromadzą się do nowej wielkiej świątyni na ryty poświęcenia. Mieszkańcy są w podziwie majestatu twojej pracy, a wybrane bóstwo obdarza cię swoją łaską." },
    { TR_CITY_MESSAGE_TITLE_MERCURY_BLESSING, "Błogosławieństwo Merkurego" },
    { TR_CITY_MESSAGE_TEXT_MERCURY_BLESSING, "Uradowany twoim oddaniem, Merkury zapewnił twoim rzemieślnikom materiały do produkcji dóbr." },
    { TR_FIGURE_TYPE_WORK_CAMP_WORKER, "Brygadzista" },
    { TR_FIGURE_TYPE_WORK_CAMP_SLAVE, "Tragarz" },
    { TR_FIGURE_TYPE_WORK_CAMP_ARCHITECT, "Architekt" },
    { TR_FIGURE_TYPE_MESS_HALL_BUYER, "Kwartermistrz" },
    { TR_FIGURE_TYPE_MESS_HALL_COLLECTOR, "Sługa obozowy" },
    { TR_BUILDING_CERES_TEMPLE_MODULE_DESC, "Wielka świątynia organizuje kapłanów Ceres by doręczali żywność i oliwę głodnym mieszkańcom." },
    { TR_BUILDING_VENUS_TEMPLE_MODULE_DESC, "Wielka świątynia pozwala kapłanom Wenus dostarczać święte wino." },
    { TR_BUILDING_MARS_TEMPLE_MODULE_DESC, "Wielka świątynia organizuje kapłanów Marsa by dostaczali żywność do punktu zaopatrzeniowego." },
    { TR_BUILDING_SMALL_TEMPLE_CERES_NAME, "Świątynia Ceres" },
    { TR_BUILDING_SMALL_TEMPLE_NEPTUNE_NAME, "Świątynia Neptuna" },
    { TR_BUILDING_SMALL_TEMPLE_MERCURY_NAME, "Świątynia Merkurego" },
    { TR_BUILDING_SMALL_TEMPLE_MARS_NAME, "Świątynia Marsa" },
    { TR_BUILDING_SMALL_TEMPLE_VENUS_NAME, "Świątynia Wenus" },
    { TR_FIGURE_TYPE_PRIEST_BUYER, "Kapłan" },
        // Transcription of mission_exact4.wav
    { TR_PHRASE_FIGURE_MISSIONARY_EXACT_4, "\"Zrobię co mogę by uspokoić tych barbarzyńców. Jestem pewny, że przestaną atakować miasto kiedy zamienię z nimi słowo.\"" },
    { TR_CITY_MESSAGE_TITLE_PANTHEON_FESTIVAL, "Coroczny festiwal" },
    { TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_CERES, "Wierni zbierają się do świętowania Cereliów, ku chwale Ceres. Rolnicy składają ofiary, licząc na obfite zbiory w nadchodzących latach."},
    { TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_NEPTUNE, "Dziś rozpoczynają się obchody Neptunaliów, ku chwale Neptuna. Wierni budują szałasy z gałęzi i radują się, schowani przed gorącem śłońca środku lata."},
    { TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MERCURY, "Kupcy i handlarze tłumnie zbierają się do świętowania Merkuraliów. Statki i magazyny pokrapiane są świętą wodą, licząć na boską ochronę Merkurego."},
    { TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_MARS, "Obywatele zbierają się na świętowanie Ekwirii, szukając łaski Marsa. Tętęt kopyt i odgłosy rydwanów przepełniają otoczenie, gdy wierni ściagają się ku chwale swojego boga."},
    { TR_CITY_MESSAGE_TEXT_PANTHEON_FESTIVAL_VENUS, "Wierni zbierają się na weneralia, dzień poświęcony Wenus. Obywatele szukają jej błogosławieństwa w sprawach sercowych." },
    { TR_TOOLTIP_BUTTON_DELETE_READ_MESSAGES, "Usuń przeczytane wiadomości" },
    { TR_TOOLTIP_BUTTON_MOTHBALL_ON, "Wyłącz ten budynek." },
    { TR_TOOLTIP_BUTTON_MOTHBALL_OFF, "Włącz ten budynek." },
    { TR_TOOLTIP_BUTTON_ACCEPT_MARKET_LADIES, "Zezwól paniom ze straganu na kupowanie tutaj" },
    { TR_TOOLTIP_BUTTON_ACCEPT_TRADE_CARAVAN, "Zezwól karawanom na handel tutaj" },
    { TR_TOOLTIP_BUTTON_ACCEPT_TRADE_SHIPS, "Zezwól statkom handlowym na handel tutaj" },
    { TR_CONFIG_HEADER_CITY_MANAGEMENT_CHANGES, "Zarządzanie miastem" },
    { TR_BUILDING_LIGHTHOUSE, "Latarnia" },
    { TR_BUILDING_LIGHTHOUSE_PHASE_1, "(Fundamenty)" },
    { TR_BUILDING_LIGHTHOUSE_PHASE_2, "(Pedestał)" },
    { TR_BUILDING_LIGHTHOUSE_PHASE_3, "(Wieża)" },
    { TR_BUILDING_LIGHTHOUSE_PHASE_4, "(Korona)" },
    { TR_BUILDING_LIGHTHOUSE_PHASE_1_TEXT, "Inżynierowie stawiają solidne fundamenty, zdolne utrzymać wagę wielkiej wieży z kamienia." },
    { TR_BUILDING_LIGHTHOUSE_PHASE_2_TEXT, "Kamieniarze konstruują pedestał, który wzniesie ogień latarni wysoko ponad horyzont." },
    { TR_BUILDING_LIGHTHOUSE_PHASE_3_TEXT, "Wieża latarni wzrasta każdego dnia, podczas gdy kamieniarze ostrożnie praktykują swoją rzemiosło." },
    { TR_BUILDING_LIGHTHOUSE_PHASE_4_TEXT, "Inżynierowie wykańczają latarnię. Niedługo będzie świecić wiele mil, zapewniając statkom drogę do domu." },
    { TR_BUILDING_LIGHTHOUSE_CONSTRUCTION_DESC, "Konstrukcja latarni wymaga materiałów zgromadzonych w magazynie, pracowników z obozu pracy i inżynierów z gildii inżynierów." },
    { TR_BUILDING_LIGHTHOUSE_BONUS_DESC, "Statki rybackie poruszają się o 10% szybciej. Sztormy morskie trwają o połowę krócej." },
    { TR_EDITOR_ALLOWED_BUILDINGS_MONUMENTS, "Monumenty" },
    { TR_CITY_MESSAGE_TEXT_LIGHTHOUSE_COMPLETE, "Latarnia, potężna wieża z kamienia wznosi się nad horyzontem. Niech jej blask prowadzi statki do domu aż do końca czasów." },
    { TR_CITY_MESSAGE_TEXT_PANTHEON_COMPLETE, "Panteon ukończony. It stands unrivaled as a monument to the awesome power of the gods and people of Rome." },
    { TR_CITY_MESSAGE_TITLE_MONUMENT_COMPLETE, "Monument ukończony" },
    { TR_CITY_MESSAGE_TITLE_NEPTUNE_BLESSING, "Błogosławieństwo Neptuna" },
    { TR_CITY_MESSAGE_TEXT_NEPTUNE_BLESSING, "Nagradzają pobożność twego miasta, Neptun zapewnia bezpieczną podróż handlarzom przez dwanaście miesięcy, podczas których będziesz mógł sprzedawać towary za połowę więcej." },
    { TR_CITY_MESSAGE_TITLE_VENUS_BLESSING, "Błogosławieństwo Wenus" },
    { TR_CITY_MESSAGE_TEXT_VENUS_BLESSING, "Uradowana twoim oddanie, Venus nagradza twoich mieszkańców zdrowiem, szczęściem i młodością, zwiększając liczbę pracujących mieszkańców." },
    { TR_BUILDING_MENU_STATUES, "Posągi" },
    { TR_BUILDING_MENU_GOV_RES, "Domy guberantora" },
    { TR_OVERLAY_ROADS, "Drogi" },
    { TR_NO_MODS_TITLE, "Nie można znaleźć folderu z modami" },
    { TR_NO_MODS_MESSAGE,
        "Twoja instalacja Cezara 3 nie posiada odpowiednio zainstalowanego folderu z modami. "
        "Nowe obiekty mogą nie wyświetlać się prawidłowo.\n"
        "Zapewnij aby folder '/mods' istniał w katalogu w którym jest zainstalowany Cezar 3. " },
    { TR_WARNING_WATER_NEEDED_FOR_LIGHTHOUSE, "Latarnia musi być zbudowana blisko wody" },
    { TR_TOOLTIP_OVERLAY_PANTHEON_ACCESS, "Ten dom ma dostęp do wszystkich bogów z panteonu." },
    { TR_BUILDING_LEGION_FOOD_BONUS, "Liczne jedzenie wzmaga morale" },
    { TR_BUILDING_LEGION_FOOD_STATUS, "Status jedzenia" },
    { TR_TOOLTIP_BUTTON_ACCEPT_QUARTERMASTER, "Zezwól kwartermistrzowi na zbieranie stąd żywności" },
    { TR_WARNING_RESOURCES_NOT_AVAILABLE, "Nie możesz pozyskać niezbędnych materiałów" },
    { TR_CONFIG_GP_CH_MONUMENTS_BOOST_CULTURE_RATING, "Ukońcczone wielkie świątynie dają +8 do kultury" },
    { TR_BUTTON_BACK_TO_MAIN_MENU, "Wróć na główne menu" },
    { TR_LABEL_PAUSE_MENU, "Pauza" },
    { TR_OVERLAY_LEVY, "Żołd" },
    { TR_TOOLTIP_OVERLAY_LEVY, " denarów płaconych miesięcznie jako żołd." },
    { TR_MAP_EDITOR_OPTIONS, "Ustawienia scenariusza" }
};

void translation_polish(const translation_string **strings, int *num_strings)
{
    *strings = all_strings;
    *num_strings = sizeof(all_strings) / sizeof(translation_string);
}
