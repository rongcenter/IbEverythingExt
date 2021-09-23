﻿#define BOOST_TEST_MODULE Test
#include <boost/test/unit_test.hpp>

#include <string>
#include <Windows.h>
#include <IbEverythingLib/Everything.hpp>

#pragma comment(lib, "winmm.lib")

using namespace std::literals;

// GBK
std::wstring pinyin_regex = L"〇一丂与业丣严丫丿乁乂么义乊乐乑乙乚乛也乵乻亄予于-云亚亜亞亦亪亱亴亿仡以仪仰仸伃伇伊伒众优伛伝伢伿佁但佑佒佗余佚佣佯佻佾侇侌侑依侥俁俋俑俓俞俣俨俹俺俼倄倚倻偀偃偊偐偞偠偣偤偯傆傊傛傜傟傭傴傿僌僥僪僷儀億儗儥優儼允元兖兗兪养兿円冘冝冤冶凐刈刖剈剡剦劓劜劮劷勇勈勚勜勩勻匀匇匋匜匬医匽卣卬印厂厃厊压厌厑厓原厡厣厭厳厴厵又友叕台右叶叹吁吆吋吔吖吚吟听吲吳吾呀呎呓员呦呭呹呾咉咏咦咬咽咿哊哑哕哟員哩哽哾唀唁唈唌唖唡唫唷唹啘啞啢啨啱喁喅喐喑喓喗喛喝喦喩喭喲営喻嗂嗈嗌嘢嘤噊噎噖噞噟噢噦噫噮噰噳噾嚈嚘-嚛嚥嚴嚶囈囐囙囝因囦囩园囿圁圄圆圉圎園圓圔圛圜圠圧圩圪圫圯圻坄均块坨坱坳垔垚垟垠垣垦垭垸垼垽埇埏埜域埡埯埶埸堉堊堐堙堣堨堬堯堰堷塋塎塩塬墅墉墕墷墿壄壅壓壛壧壱壹夁夃夕夗夜夤夭央失夵夷夽奄奇奕奥奫妁妋妍妖妘妜妟妤妧妪妴妷姎姚姨姬姲姶姷姸姻娅娛娪娫娮娯娱婣婬婭婴婸婹媀媐媕媖媛媪媮媱媴媵嫄嫈嫕嫗嫚嫛嫞嫣嬄嬈嬊嬐嬑嬟嬩嬮嬰嬳嬴嬽嬿孆孍孕孧孲孴孾它宇宎宐宛宜宥宧宴容寃寅寓寙寱寲射將尉尢尤尧尭尹尾屵屹屿岄岆岈岟岩岳峄峓峟峣峪峫峳峾峿崎崕崖崛崟崤崦崯崳崵崸崺崾嵃嵎嵒嵓嵛嵤嵱嶎嶖嶢嶤嶧嶪嶫嶬嶮嶷嶼嶽嶾巆巊巌巖巗巘巚巡已巳巸币帟帠幆幺幼幽广庌应庘庡庮庵庸庽庾廕廙廮廱廴延异弇弈弋弌引弬弲彛-彠彥彦彧彮影彵役徉御徭徼忆忔応忧忬怈怏怞怠怡怣怨怮怺怿恌恙恞恱恹恽恿悀悁悅悆悇悒悘悠悥悦惌惐惥惲愈愉意愑愓愔愚愝愠愥愪愮愹愿慂慃慇慍慭慵慾憂憖憗憶應懊懌懕懙懚懨懩懮懿戉或戫戭戲戺扅扆扊扚扜扡扬扰扵抁抈抎抑抣抭抰抴押拁拗拥拸拽挜挧挹挻捐捓捙捝捥捳掎掖掗掜掞掩掾揂揄揅揖揘揚揜揞揠揲援揶揺搋搖搤摇摬摿撄撎撽擁擇擖擛擨擪擫擽攁攍攖攸攺敔敡敥敭敼斁斔斜斞斦於施斿旑旕旖旟旲旸昀昂易昖昙昜映昱昳晏晔晕景晹晻暆暈暍暎暘暚暥曀曄曅曎曕曗曜曣曮曰曱曳曵朄月有朓朠札杅杙杝杨杬杳枂枍枒枖枟枻枼枽柂柍柚柡柼栎栐栘栧栩栯栶样栺桋桙桜桠桯梀梄梎梧梬棛棜棩棪棫棭椅椏椬椰椸椻椼楀楆楊楌楡楢楥楧楪業楰楹榅榆榏榚榞榣榬様槦槱槷槸樂樣樮樱樴樾橒橪橼檃檍檐檥檭檹檼檿櫌櫞櫟櫩櫲櫻櫽櫾櫿欎欕欝欤欥欭欲欹欽歅歇歈歋歍歖歝歟歶殀殃殒殔殕殗殞殥殪殷殹殽毅毉毓毹氀氜氤氧氩氬氱氲氳永汋汓汙汧汩汼汽沂沄沅沇沋沶油沿泂泄泅泆泑泱泳泿洂洇洋洕洝洢洩洫洮浂浟浥浧浳浴涂涌涎涒涓涢涯液涴淊淡淢淤淫淯淵淹淾渁渆渊渏渔渕渝温渫渰渶渷游湙湚湛湡湧湮湯湲湵溁溋溎源溒溔溢溳溵滎滛滟滢滧滪滺滽漁漄演漜漪漹漾潁潆潏潒潝潩潭潯潱澐澚澞澤澦澭澲澳澺濙濚濥濦濴瀀瀁瀅瀛瀠瀯瀴瀷瀹灁灉灎灐灔灜灧灩灪灹炀炈炎炏炴烄烊烎烏烑烟烨烻焆焉焑焔焬焰焱焲焴焸煇煐煙煜煠煨煬煴煾熀熅熉熎熒熖熙熠熤熨熪熼燁燄燏燕燚營燠燡燱燿爍爓爗爚爩爰爷爺爻牅牏牖牗牙牪牰犄犹犽犾狁狋狏狕狖狠狱狳狺狿猌猒猗猚猨猰猶猷猺猿獂獄獈獝獟獶玅玉王玗玙玚玡玥玧玪玴珆珚珜珢珧珱琂琊琙琟琰瑀瑒瑗瑘瑛瑜瑤瑩瑶瑿璌璍璎璵瓔瓛瓵甇甖甗用甬由甴甸畇畩畬畭異畹疋疑疙疟疡疣疨疫痈痍痏痒痖痬痷瘀瘂瘉瘍瘐瘖瘗瘞瘟瘧瘱瘾瘿癊癌癒癔癕癢癭癮癰皣盁盂盈益盐盓盶盾眃眏眑眙眢眻眼睚睪睮瞖瞱瞸矅矆矞矣矨矱砑研砚砡砽硍硏硛硢硧硪硬硯硲硽碒碞碣碤磍磒磘磤礇礏礒礖礙礜礢礯礹礿祅祎祐祤禉禋禐禓禕禜禦禴禹禺秇秐秗秞秧秵移稏稢稦稶穎穓穥穵穻穾穿窅窈窑窔窨窫窬窯窰窳竩竽笌笎笖筃筄筍筠筩筵筼箊箢箷箹篔篗篶篽簃簷籅籆籎籝籞籥籯籰籲粌粤粥粵糿約紆紜紲紻絏絪綖維綺緎緓緣緤緰緷緸緼縁縈縊縕縜縯繄繇繘繧繩繶繹纅纋纓纡约纭绎绬缊缘缢缨罂罃罌罨罭羊羏羐羑羕羗羛羠羡義羪羬羭羱羽羿翊翌翳翼耀耘耛耰耴耶耺聈聐聱聶聿肀肄肊肙肬育肴胤胦胭胰脜脩腋腌腧腪腰腴膁膉膡膺臃臆臒臙臾舀舁舆與舒舣艅艈艗艞艤艳艶艷艺艾芅芋芌芩芫芸芽苂苃苅苑苚苡苢苭英茒茔茚茟茰茵荑荥荧荫药荶荺荼莖莚莜莠莤莸莹莺菀菴菸萒萓萟萤营萦萭萮萸萾葉葕葯葽葾蒀蒏蒑蒕蒝蒬蒮蒷蓔蓣蓥蓹蓺蔅蔚蔩蔫蔭蕍蕓蕕蕘蕥蕰蕴蕷蕹薀薁薏薗薟薬薳藀藇藙藝藥藴蘊蘌蘙蘛蘟蘡蘥蘨虉虞虤虵虶蚁蚎蚏蚓蚖蚘蚜蚰蚴蛇蛍蛘蛜蛡蛦蛹蛾蜍蜎蜏蜒蜕蜟蜮蜴蜵蝆蝇蝓蝘蝝蝣蝤蝧蝯蝹蝺蝿螈螔螘螠螢螸螾蟈蟫蟻蠅蠖蠮蠱蠳衍衏衘衙衣衤衧衪衵袁袂袎袘袣袬裀裔裕裛裫裷裺裿褎褑褕褗褘褞褤褮褹襗襼襾要覃覎覞覦覮觃觎觺觾言訁訑訔訚訝訞訡訢訧訮訲訳詇詍詏詑詒詠詣詳詽誃誉誒誘語説誼誾諛諭諲諹諺謁謍謚謜謠謡謣謻譍譩譯議譺譻譽讉讌讑讔讛讞讠议讶译诒诣语诱说谀谊谒谕谚谣谳谷豓豔豙豛豣豫豷貁貍貐貖貗貟貤貽賏賱賹贀贇贋贏贗贠贻赝赟赢赺越趛趯趼跀跃跇跠踊踦踰踴躍躒躽軅軈軉軋軏軮軺軼輅輍輏輐輑輗輢輰輵輶輼輿轅轙轝轧轶轺辕辥辷込迂迃迆迎运迓远迤迭迱迶迻逌逘這逞逰逳逸逺逾遃遇遊運遗遙遠遥遹遺邀邍邎邑邕邘邧邪邮邺郁郓郔郚郢郧郵郺郼郾鄅鄆鄓鄖鄘鄞鄢鄴鄾酀酉酏酑酓酛酝酭酳酽醃醖醞醟醧醫醳醶醷醼釅釉釋野釔釪釴釶釾釿鈅鈏鈗鈘鈝鈠鈨鈺鈾鉇鉈鉛鉞鉠鉯銀銉銕銚銥銦銪銹銿鋆鋊鋋鋙鋣鋭鋺錏錟錡錥鍈鍚鍝鍱鎁鎐鎑鎣鎰鎱鏔鏞鐊鐍鐚鐛鐭鐷鐿鑍鑠鑰钀钇钖钥钰钺铀铅铔铕铘铟铫铱银铻锳镒镛镱閆閘閱閲閹閻閼閾闄闇闉闫阅阈阉阎阏阣-阦阭阮阳阴阽陁陓院陨陭陰陶陻陽隁隂隃隅隐隒隕隠隩險隱隶隿雁雅雉雍雓雝雨雩雲雵霅霒霙霠霣霪霬霱霷靉靥靨靷靾靿鞅鞇鞕韗韞韫音韵韹韺韻韾頁頉預頤頥頨頴頵顊顏顑顒顔顗願顤顩页预颍颐颕颖颙颜颺颻飏飖食飫飬飮飲飴餆養餍餘餚餣餫饁饇饐饔饜饫饮饴馀馌馧馭馻駀駅駌駚駰騐験騕騟騴騵驁驈驗驛驜驠驭驿骃验骬骮髃髺鬰鬱鬳鬻魇魊魘魚魣魭魷鮋鮣鮧鮨鮽鯈鯒鯣鯲鰅鰋鰑鰩鰫鱅鱊鱦鱮鱼鱿鲉鲬鳐鳙鳦鳫鳱鳶鳿鴁鴈鴉鴛鴢鴥-鴨鴪鴬鴳鴹鴺鵒鵪鵶鵷鵺鶂鶃鶍鶑鶠鶢鶧鶯鶰鷁鷂鷃鷊鷕鷖鷛鷠鷣鷧鷪鷰鷸鷹鷾鸃鸆鸈鸉鸎鸑鸒鸙鸚鸢鸦鸭鸯鸳鹆鹓鹝鹞鹢鹥鹦鹬鹰鹽麀麌麙麣麲黓黝黟黡黤黦黫黬黭黰黳黶黿鼋鼘鼝鼬鼴鼹鼼齖齗齞齦齩齫齬齮齳齴齵齸齾龂龈龉龑龠龥";
std::wstring pinyin_branch = L"〇|一|丂|与|业|丣|严|丫|丿|乁|乂|么|义|乊|乐|乑|乙|乚|乛|也|乵|乻|亄|予|于|亏|亐|云|亚|亜|亞|亦|亪|亱|亴|亿|仡|以|仪|仰|仸|伃|伇|伊|伒|众|优|伛|伝|伢|伿|佁|但|佑|佒|佗|余|佚|佣|佯|佻|佾|侇|侌|侑|依|侥|俁|俋|俑|俓|俞|俣|俨|俹|俺|俼|倄|倚|倻|偀|偃|偊|偐|偞|偠|偣|偤|偯|傆|傊|傛|傜|傟|傭|傴|傿|僌|僥|僪|僷|儀|億|儗|儥|優|儼|允|元|兖|兗|兪|养|兿|円|冘|冝|冤|冶|凐|刈|刖|剈|剡|剦|劓|劜|劮|劷|勇|勈|勚|勜|勩|勻|匀|匇|匋|匜|匬|医|匽|卣|卬|印|厂|厃|厊|压|厌|厑|厓|原|厡|厣|厭|厳|厴|厵|又|友|叕|台|右|叶|叹|吁|吆|吋|吔|吖|吚|吟|听|吲|吳|吾|呀|呎|呓|员|呦|呭|呹|呾|咉|咏|咦|咬|咽|咿|哊|哑|哕|哟|員|哩|哽|哾|唀|唁|唈|唌|唖|唡|唫|唷|唹|啘|啞|啢|啨|啱|喁|喅|喐|喑|喓|喗|喛|喝|喦|喩|喭|喲|営|喻|嗂|嗈|嗌|嘢|嘤|噊|噎|噖|噞|噟|噢|噦|噫|噮|噰|噳|噾|嚈|嚘|嚙|嚚|嚛|嚥|嚴|嚶|囈|囐|囙|囝|因|囦|囩|园|囿|圁|圄|圆|圉|圎|園|圓|圔|圛|圜|圠|圧|圩|圪|圫|圯|圻|坄|均|块|坨|坱|坳|垔|垚|垟|垠|垣|垦|垭|垸|垼|垽|埇|埏|埜|域|埡|埯|埶|埸|堉|堊|堐|堙|堣|堨|堬|堯|堰|堷|塋|塎|塩|塬|墅|墉|墕|墷|墿|壄|壅|壓|壛|壧|壱|壹|夁|夃|夕|夗|夜|夤|夭|央|失|夵|夷|夽|奄|奇|奕|奥|奫|妁|妋|妍|妖|妘|妜|妟|妤|妧|妪|妴|妷|姎|姚|姨|姬|姲|姶|姷|姸|姻|娅|娛|娪|娫|娮|娯|娱|婣|婬|婭|婴|婸|婹|媀|媐|媕|媖|媛|媪|媮|媱|媴|媵|嫄|嫈|嫕|嫗|嫚|嫛|嫞|嫣|嬄|嬈|嬊|嬐|嬑|嬟|嬩|嬮|嬰|嬳|嬴|嬽|嬿|孆|孍|孕|孧|孲|孴|孾|它|宇|宎|宐|宛|宜|宥|宧|宴|容|寃|寅|寓|寙|寱|寲|射|將|尉|尢|尤|尧|尭|尹|尾|屵|屹|屿|岄|岆|岈|岟|岩|岳|峄|峓|峟|峣|峪|峫|峳|峾|峿|崎|崕|崖|崛|崟|崤|崦|崯|崳|崵|崸|崺|崾|嵃|嵎|嵒|嵓|嵛|嵤|嵱|嶎|嶖|嶢|嶤|嶧|嶪|嶫|嶬|嶮|嶷|嶼|嶽|嶾|巆|巊|巌|巖|巗|巘|巚|巡|已|巳|巸|币|帟|帠|幆|幺|幼|幽|广|庌|应|庘|庡|庮|庵|庸|庽|庾|廕|廙|廮|廱|廴|延|异|弇|弈|弋|弌|引|弬|弲|彛|彜|彝|彞|彟|彠|彥|彦|彧|彮|影|彵|役|徉|御|徭|徼|忆|忔|応|忧|忬|怈|怏|怞|怠|怡|怣|怨|怮|怺|怿|恌|恙|恞|恱|恹|恽|恿|悀|悁|悅|悆|悇|悒|悘|悠|悥|悦|惌|惐|惥|惲|愈|愉|意|愑|愓|愔|愚|愝|愠|愥|愪|愮|愹|愿|慂|慃|慇|慍|慭|慵|慾|憂|憖|憗|憶|應|懊|懌|懕|懙|懚|懨|懩|懮|懿|戉|或|戫|戭|戲|戺|扅|扆|扊|扚|扜|扡|扬|扰|扵|抁|抈|抎|抑|抣|抭|抰|抴|押|拁|拗|拥|拸|拽|挜|挧|挹|挻|捐|捓|捙|捝|捥|捳|掎|掖|掗|掜|掞|掩|掾|揂|揄|揅|揖|揘|揚|揜|揞|揠|揲|援|揶|揺|搋|搖|搤|摇|摬|摿|撄|撎|撽|擁|擇|擖|擛|擨|擪|擫|擽|攁|攍|攖|攸|攺|敔|敡|敥|敭|敼|斁|斔|斜|斞|斦|於|施|斿|旑|旕|旖|旟|旲|旸|昀|昂|易|昖|昙|昜|映|昱|昳|晏|晔|晕|景|晹|晻|暆|暈|暍|暎|暘|暚|暥|曀|曄|曅|曎|曕|曗|曜|曣|曮|曰|曱|曳|曵|朄|月|有|朓|朠|札|杅|杙|杝|杨|杬|杳|枂|枍|枒|枖|枟|枻|枼|枽|柂|柍|柚|柡|柼|栎|栐|栘|栧|栩|栯|栶|样|栺|桋|桙|桜|桠|桯|梀|梄|梎|梧|梬|棛|棜|棩|棪|棫|棭|椅|椏|椬|椰|椸|椻|椼|楀|楆|楊|楌|楡|楢|楥|楧|楪|業|楰|楹|榅|榆|榏|榚|榞|榣|榬|様|槦|槱|槷|槸|樂|樣|樮|樱|樴|樾|橒|橪|橼|檃|檍|檐|檥|檭|檹|檼|檿|櫌|櫞|櫟|櫩|櫲|櫻|櫽|櫾|櫿|欎|欕|欝|欤|欥|欭|欲|欹|欽|歅|歇|歈|歋|歍|歖|歝|歟|歶|殀|殃|殒|殔|殕|殗|殞|殥|殪|殷|殹|殽|毅|毉|毓|毹|氀|氜|氤|氧|氩|氬|氱|氲|氳|永|汋|汓|汙|汧|汩|汼|汽|沂|沄|沅|沇|沋|沶|油|沿|泂|泄|泅|泆|泑|泱|泳|泿|洂|洇|洋|洕|洝|洢|洩|洫|洮|浂|浟|浥|浧|浳|浴|涂|涌|涎|涒|涓|涢|涯|液|涴|淊|淡|淢|淤|淫|淯|淵|淹|淾|渁|渆|渊|渏|渔|渕|渝|温|渫|渰|渶|渷|游|湙|湚|湛|湡|湧|湮|湯|湲|湵|溁|溋|溎|源|溒|溔|溢|溳|溵|滎|滛|滟|滢|滧|滪|滺|滽|漁|漄|演|漜|漪|漹|漾|潁|潆|潏|潒|潝|潩|潭|潯|潱|澐|澚|澞|澤|澦|澭|澲|澳|澺|濙|濚|濥|濦|濴|瀀|瀁|瀅|瀛|瀠|瀯|瀴|瀷|瀹|灁|灉|灎|灐|灔|灜|灧|灩|灪|灹|炀|炈|炎|炏|炴|烄|烊|烎|烏|烑|烟|烨|烻|焆|焉|焑|焔|焬|焰|焱|焲|焴|焸|煇|煐|煙|煜|煠|煨|煬|煴|煾|熀|熅|熉|熎|熒|熖|熙|熠|熤|熨|熪|熼|燁|燄|燏|燕|燚|營|燠|燡|燱|燿|爍|爓|爗|爚|爩|爰|爷|爺|爻|牅|牏|牖|牗|牙|牪|牰|犄|犹|犽|犾|狁|狋|狏|狕|狖|狠|狱|狳|狺|狿|猌|猒|猗|猚|猨|猰|猶|猷|猺|猿|獂|獄|獈|獝|獟|獶|玅|玉|王|玗|玙|玚|玡|玥|玧|玪|玴|珆|珚|珜|珢|珧|珱|琂|琊|琙|琟|琰|瑀|瑒|瑗|瑘|瑛|瑜|瑤|瑩|瑶|瑿|璌|璍|璎|璵|瓔|瓛|瓵|甇|甖|甗|用|甬|由|甴|甸|畇|畩|畬|畭|異|畹|疋|疑|疙|疟|疡|疣|疨|疫|痈|痍|痏|痒|痖|痬|痷|瘀|瘂|瘉|瘍|瘐|瘖|瘗|瘞|瘟|瘧|瘱|瘾|瘿|癊|癌|癒|癔|癕|癢|癭|癮|癰|皣|盁|盂|盈|益|盐|盓|盶|盾|眃|眏|眑|眙|眢|眻|眼|睚|睪|睮|瞖|瞱|瞸|矅|矆|矞|矣|矨|矱|砑|研|砚|砡|砽|硍|硏|硛|硢|硧|硪|硬|硯|硲|硽|碒|碞|碣|碤|磍|磒|磘|磤|礇|礏|礒|礖|礙|礜|礢|礯|礹|礿|祅|祎|祐|祤|禉|禋|禐|禓|禕|禜|禦|禴|禹|禺|秇|秐|秗|秞|秧|秵|移|稏|稢|稦|稶|穎|穓|穥|穵|穻|穾|穿|窅|窈|窑|窔|窨|窫|窬|窯|窰|窳|竩|竽|笌|笎|笖|筃|筄|筍|筠|筩|筵|筼|箊|箢|箷|箹|篔|篗|篶|篽|簃|簷|籅|籆|籎|籝|籞|籥|籯|籰|籲|粌|粤|粥|粵|糿|約|紆|紜|紲|紻|絏|絪|綖|維|綺|緎|緓|緣|緤|緰|緷|緸|緼|縁|縈|縊|縕|縜|縯|繄|繇|繘|繧|繩|繶|繹|纅|纋|纓|纡|约|纭|绎|绬|缊|缘|缢|缨|罂|罃|罌|罨|罭|羊|羏|羐|羑|羕|羗|羛|羠|羡|義|羪|羬|羭|羱|羽|羿|翊|翌|翳|翼|耀|耘|耛|耰|耴|耶|耺|聈|聐|聱|聶|聿|肀|肄|肊|肙|肬|育|肴|胤|胦|胭|胰|脜|脩|腋|腌|腧|腪|腰|腴|膁|膉|膡|膺|臃|臆|臒|臙|臾|舀|舁|舆|與|舒|舣|艅|艈|艗|艞|艤|艳|艶|艷|艺|艾|芅|芋|芌|芩|芫|芸|芽|苂|苃|苅|苑|苚|苡|苢|苭|英|茒|茔|茚|茟|茰|茵|荑|荥|荧|荫|药|荶|荺|荼|莖|莚|莜|莠|莤|莸|莹|莺|菀|菴|菸|萒|萓|萟|萤|营|萦|萭|萮|萸|萾|葉|葕|葯|葽|葾|蒀|蒏|蒑|蒕|蒝|蒬|蒮|蒷|蓔|蓣|蓥|蓹|蓺|蔅|蔚|蔩|蔫|蔭|蕍|蕓|蕕|蕘|蕥|蕰|蕴|蕷|蕹|薀|薁|薏|薗|薟|薬|薳|藀|藇|藙|藝|藥|藴|蘊|蘌|蘙|蘛|蘟|蘡|蘥|蘨|虉|虞|虤|虵|虶|蚁|蚎|蚏|蚓|蚖|蚘|蚜|蚰|蚴|蛇|蛍|蛘|蛜|蛡|蛦|蛹|蛾|蜍|蜎|蜏|蜒|蜕|蜟|蜮|蜴|蜵|蝆|蝇|蝓|蝘|蝝|蝣|蝤|蝧|蝯|蝹|蝺|蝿|螈|螔|螘|螠|螢|螸|螾|蟈|蟫|蟻|蠅|蠖|蠮|蠱|蠳|衍|衏|衘|衙|衣|衤|衧|衪|衵|袁|袂|袎|袘|袣|袬|裀|裔|裕|裛|裫|裷|裺|裿|褎|褑|褕|褗|褘|褞|褤|褮|褹|襗|襼|襾|要|覃|覎|覞|覦|覮|觃|觎|觺|觾|言|訁|訑|訔|訚|訝|訞|訡|訢|訧|訮|訲|訳|詇|詍|詏|詑|詒|詠|詣|詳|詽|誃|誉|誒|誘|語|説|誼|誾|諛|諭|諲|諹|諺|謁|謍|謚|謜|謠|謡|謣|謻|譍|譩|譯|議|譺|譻|譽|讉|讌|讑|讔|讛|讞|讠|议|讶|译|诒|诣|语|诱|说|谀|谊|谒|谕|谚|谣|谳|谷|豓|豔|豙|豛|豣|豫|豷|貁|貍|貐|貖|貗|貟|貤|貽|賏|賱|賹|贀|贇|贋|贏|贗|贠|贻|赝|赟|赢|赺|越|趛|趯|趼|跀|跃|跇|跠|踊|踦|踰|踴|躍|躒|躽|軅|軈|軉|軋|軏|軮|軺|軼|輅|輍|輏|輐|輑|輗|輢|輰|輵|輶|輼|輿|轅|轙|轝|轧|轶|轺|辕|辥|辷|込|迂|迃|迆|迎|运|迓|远|迤|迭|迱|迶|迻|逌|逘|這|逞|逰|逳|逸|逺|逾|遃|遇|遊|運|遗|遙|遠|遥|遹|遺|邀|邍|邎|邑|邕|邘|邧|邪|邮|邺|郁|郓|郔|郚|郢|郧|郵|郺|郼|郾|鄅|鄆|鄓|鄖|鄘|鄞|鄢|鄴|鄾|酀|酉|酏|酑|酓|酛|酝|酭|酳|酽|醃|醖|醞|醟|醧|醫|醳|醶|醷|醼|釅|釉|釋|野|釔|釪|釴|釶|釾|釿|鈅|鈏|鈗|鈘|鈝|鈠|鈨|鈺|鈾|鉇|鉈|鉛|鉞|鉠|鉯|銀|銉|銕|銚|銥|銦|銪|銹|銿|鋆|鋊|鋋|鋙|鋣|鋭|鋺|錏|錟|錡|錥|鍈|鍚|鍝|鍱|鎁|鎐|鎑|鎣|鎰|鎱|鏔|鏞|鐊|鐍|鐚|鐛|鐭|鐷|鐿|鑍|鑠|鑰|钀|钇|钖|钥|钰|钺|铀|铅|铔|铕|铘|铟|铫|铱|银|铻|锳|镒|镛|镱|閆|閘|閱|閲|閹|閻|閼|閾|闄|闇|闉|闫|阅|阈|阉|阎|阏|阣|阤|阥|阦|阭|阮|阳|阴|阽|陁|陓|院|陨|陭|陰|陶|陻|陽|隁|隂|隃|隅|隐|隒|隕|隠|隩|險|隱|隶|隿|雁|雅|雉|雍|雓|雝|雨|雩|雲|雵|霅|霒|霙|霠|霣|霪|霬|霱|霷|靉|靥|靨|靷|靾|靿|鞅|鞇|鞕|韗|韞|韫|音|韵|韹|韺|韻|韾|頁|頉|預|頤|頥|頨|頴|頵|顊|顏|顑|顒|顔|顗|願|顤|顩|页|预|颍|颐|颕|颖|颙|颜|颺|颻|飏|飖|食|飫|飬|飮|飲|飴|餆|養|餍|餘|餚|餣|餫|饁|饇|饐|饔|饜|饫|饮|饴|馀|馌|馧|馭|馻|駀|駅|駌|駚|駰|騐|験|騕|騟|騴|騵|驁|驈|驗|驛|驜|驠|驭|驿|骃|验|骬|骮|髃|髺|鬰|鬱|鬳|鬻|魇|魊|魘|魚|魣|魭|魷|鮋|鮣|鮧|鮨|鮽|鯈|鯒|鯣|鯲|鰅|鰋|鰑|鰩|鰫|鱅|鱊|鱦|鱮|鱼|鱿|鲉|鲬|鳐|鳙|鳦|鳫|鳱|鳶|鳿|鴁|鴈|鴉|鴛|鴢|鴥|鴦|鴧|鴨|鴪|鴬|鴳|鴹|鴺|鵒|鵪|鵶|鵷|鵺|鶂|鶃|鶍|鶑|鶠|鶢|鶧|鶯|鶰|鷁|鷂|鷃|鷊|鷕|鷖|鷛|鷠|鷣|鷧|鷪|鷰|鷸|鷹|鷾|鸃|鸆|鸈|鸉|鸎|鸑|鸒|鸙|鸚|鸢|鸦|鸭|鸯|鸳|鹆|鹓|鹝|鹞|鹢|鹥|鹦|鹬|鹰|鹽|麀|麌|麙|麣|麲|黓|黝|黟|黡|黤|黦|黫|黬|黭|黰|黳|黶|黿|鼋|鼘|鼝|鼬|鼴|鼹|鼼|齖|齗|齞|齦|齩|齫|齬|齮|齳|齴|齵|齸|齾|龂|龈|龉|龑|龠|龥";
std::wstring pinyin_range = L"〇-龥";

std::wstring pinyin_regex_gb2312 = L"一与业严丫丿么义乐乙也予于亏云亚亦亿仡以仪仰伊众优伛伢但佑佗余佚佣佯佻佾侑依侥俑俞俣俨俺倚偃允元兖养冤冶刈刖剡劓勇匀医卣印厂压厌原厣又友台右叶叹吁吆吖吟听吲吾呀呓员呦咏咦咬咽咿哑哕哟哩哽唁唷喁喑喝喻嗌嘤噎噢噫囝因园囿圄圆圉圜圩圪圯圻均块坨坳垠垣垦垭垸埏域埯埸堙堰塬墅墉壅壹夕夜夤夭央失夷奄奇奕奥妁妍妖妤妪姚姨姬姻娅娱婴媛媪媵嫣嬴孕它宇宛宜宥宴容寅寓射尉尢尤尧尹尾屹屿岈岩岳峄峪崎崖崛崤崦崾嵛嶷巡已巳币幺幼幽广应庵庸庾廴延异弈弋引彝彦影役徉御徭徼忆忧怏怠怡怨怿恙恹恽恿悒悠悦愈愉意愚愠愿慵懊懿或扬扰抑押拗拥拽挹捐掎掖掩掾揄揖揞揠揲援揶搋摇撄攸斜於施旖昀昂易昙映昱晏晔晕景曜曰曳月有札杨杳柚栎栩样桠梧椅椰楹榆樱樾橼檐欤欲欹歇殃殒殪殷毅毓毹氤氧氩氲永汩汽沂沅油沿泄泅泱泳洇洋洫洮浴涂涌涎涓涯液淡淤淫淹渊渔渝温渫游湛湮源溢滟滢演漪漾潆潭澳瀛瀹炀炎烊烟烨焉焰焱煜煨熙熠熨燕燠爰爷爻牖牙犄犹狁狠狱狳狺猗猷猿玉王珧琊琰瑗瑛瑜瑶璎用甬由甸畹疋疑疙疟疡疣疫痈痍痒痖瘀瘐瘗瘟瘾瘿癌癔盂盈益盐盾眙眢眼睚矣砑研砚硪硬碣禹禺秧移穿窈窑窨窬窳竽筠筵箢粤粥繇纡约纭绎缘缢缨罂罨羊羡羽羿翊翌翳翼耀耘耶聱聿肀肄育肴胤胭胰腋腌腧腰腴膺臃臆臾舀舁舆舒舣艳艺艾芋芩芫芸芽苑苡英茔茚茵荑荥荧荫药荼莜莠莸莹莺菀菸萤营萦萸蓣蓥蔚蔫蕴蕹薏虞蚁蚓蚜蚰蚴蛇蛘蛹蛾蜍蜒蜕蜮蜴蝇蝓蝣蝤螈蠖衍衙衣衤袁袂裔裕要覃觎言誉讠议讶译诒诣语诱说谀谊谒谕谚谣谳谷豫贻赝赢越趼跃踊轧轶轺辕迂迎运迓远迤迭逞逸逾遇遗遥邀邑邕邪邮邺郁郓郢郧郾鄞鄢酉酏酝酽釉野钇钥钰钺铀铅铕铘铟铫铱银镒镛镱闫阅阈阉阎阏阮阳阴阽院陨陶隅隐隶雁雅雉雍雨雩霪靥鞅韫音韵页预颍颐颖颜食餍饔饫饮饴馀驭驿验鬻魇鱼鱿鳐鳙鸢鸦鸭鸯鸳鹆鹞鹦鹬鹰黝黟鼋鼬鼹龈龉龠";
std::wstring pinyin_range_gb2312 = L"[一-龠]";

#include "dynamic_charset.h.user"  // private data
//#define DYNAMIC_CHARSET_Y L"源页议游育娱乐汽语言元一么于音友有影"
//#define DYNAMIC_CHARSET_YY_1 L"娱语"
//#define DYNAMIC_CHARSET_YY_2 L"乐言"


BOOST_FIXTURE_TEST_SUITE(SingleCharQueryPerformance, Everythings::Everything)
    void test_query(Everythings::Everything& ev, std::wstring_view query) {
        using namespace Everythings;

        DWORD t = timeGetTime();
        ev.query_send(query, 0, Request::FileName);
        QueryResults results = ev.query_get();
        t = timeGetTime() - t;

        BOOST_CHECK(results.found_num);
        BOOST_TEST_MESSAGE(t << "ms");
        Sleep(2000);
    }

    BOOST_AUTO_TEST_SUITE(Char)

        BOOST_AUTO_TEST_CASE(Char) {
            test_query(*this, L"y");
        }

        BOOST_AUTO_TEST_CASE(Regex) {
            test_query(*this, L"regex:y");
        }

        BOOST_AUTO_TEST_CASE(RegexSet) {
            test_query(*this, L"regex:[y]");
        }

    BOOST_AUTO_TEST_SUITE_END()


    BOOST_AUTO_TEST_SUITE(Pinyin)
        
        // very fast
        BOOST_AUTO_TEST_CASE(LetterBranch) {
            test_query(*this, L"regex:y|[" DYNAMIC_CHARSET_Y L"]");
        }

        BOOST_AUTO_TEST_CASE(LetterBranchCase) {
            test_query(*this, L"case:regex:y|Y|[" DYNAMIC_CHARSET_Y L"]");
        }

        BOOST_AUTO_TEST_CASE(Base_v02) {
            test_query(*this, L"case:regex:[yY" DYNAMIC_CHARSET_Y L"]");
        }

        // better
        BOOST_AUTO_TEST_CASE(Dynamic) {
            test_query(*this, L"regex:[y" DYNAMIC_CHARSET_Y L"]");
        }

        // better
        BOOST_AUTO_TEST_CASE(Gb2312) {
            test_query(*this, L"regex:[y" + pinyin_regex_gb2312 + L"]");
        }

        // faster but not the same
        BOOST_AUTO_TEST_CASE(Count) {
            // place count before regex!
            test_query(*this, L"count:100 regex:[y" + pinyin_regex + L"]");
        }

        // faster but not the same
        BOOST_AUTO_TEST_CASE(Boundary) {
            test_query(*this, L"regex:\\b[y" + pinyin_regex + L"]");
        }

        // better
        BOOST_AUTO_TEST_CASE(Case) {
            test_query(*this, L"case:regex:[yY" + pinyin_regex + L"]");
        }

        BOOST_AUTO_TEST_CASE(Base_v01) {
            test_query(*this, L"regex:[y" + pinyin_regex + L"]");
        }

        /*
        // cpu killer
        BOOST_AUTO_TEST_CASE(Branch) {
            test_query(*this, L"regex:y|" + pinyin_branch);
        }
        */

        // worse
        BOOST_AUTO_TEST_CASE(Lookaround1) {
            test_query(*this, L"regex:<y|(?=[" + pinyin_range + L"])[" + pinyin_regex + L"]>");
        }

        BOOST_AUTO_TEST_CASE(Lookaround2_1) {
            // regex:"(?>y|(?=[一-龠])一)"
            test_query(*this, L"regex:\"(?>y|(?=[" + pinyin_range + L"])[" + pinyin_regex + L"])\"");
        }

        // worse than 1
        BOOST_AUTO_TEST_CASE(Lookaround2) {
            // regex:"(y|(?=[一-龠])一)"
            test_query(*this, L"regex:\"(y|(?=[" + pinyin_range + L"])[" + pinyin_regex + L"])\"");
        }

        // worse than 2
        BOOST_AUTO_TEST_CASE(Lookaround3) {
            // regex:"(y|(?![\x00-\xff])一)"
            test_query(*this, L"regex:\"(y|(?![\\x00-\\xff])[" + pinyin_regex + L"])\"");
        }

        // worse than 3
        BOOST_AUTO_TEST_CASE(Lookaround4) {
            // regex:"(y|(?![一-龠])(?!)|一)"
            test_query(*this, L"regex:\"(y|(?![" + pinyin_range + L"])(?!)|[" + pinyin_regex + L"])\"");
        }
    BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()


BOOST_FIXTURE_TEST_SUITE(MultiCharsQueryPerformance, Everythings::Everything)
    void test_query(Everythings::Everything& ev, std::wstring_view query) {
        using namespace Everythings;

        DWORD t = timeGetTime();
        ev.query_send(query, 0, Request::FileName);
        QueryResults results = ev.query_get();
        t = timeGetTime() - t;

        BOOST_CHECK(results.found_num);
        BOOST_TEST_MESSAGE(t << "ms");
        Sleep(2000);
    }

    BOOST_AUTO_TEST_SUITE(Char)

        BOOST_AUTO_TEST_CASE(Branch) {
            test_query(*this, L"x|y");
        }

        // faster than set?
        BOOST_AUTO_TEST_CASE(RegexBranch) {
            test_query(*this, L"regex:x|y");
        }

        BOOST_AUTO_TEST_CASE(RegexSet) {
            test_query(*this, L"regex:[xy]");
        }

    BOOST_AUTO_TEST_SUITE_END()


    BOOST_AUTO_TEST_SUITE(Char100)

        BOOST_AUTO_TEST_CASE(RegexSet) {
            test_query(*this, L"regex:[一与业严丫丿么义乐乙也予于亏云亚亦亿仡以仪仰伊众优伛伢但佑佗余佚佣佯佻佾侑依侥俑俞俣俨俺倚偃允元兖养冤冶刈刖剡劓勇匀医卣印厂压厌原厣又友台右叶叹吁吆吖吟听吲吾呀呓员呦咏咦咬咽咿哑哕哟哩哽唁唷喁喑喝喻嗌]");
        }

        // very slow
        BOOST_AUTO_TEST_CASE(RegexBranch) {
            test_query(*this, L"regex:一|与|业|严|丫|丿|么|义|乐|乙|也|予|于|亏|云|亚|亦|亿|仡|以|仪|仰|伊|众|优|伛|伢|但|佑|佗|余|佚|佣|佯|佻|佾|侑|依|侥|俑|俞|俣|俨|俺|倚|偃|允|元|兖|养|冤|冶|刈|刖|剡|劓|勇|匀|医|卣|印|厂|压|厌|原|厣|又|友|台|右|叶|叹|吁|吆|吖|吟|听|吲|吾|呀|呓|员|呦|咏|咦|咬|咽|咿|哑|哕|哟|哩|哽|唁|唷|喁|喑|喝|喻|嗌");
        }

        // very slow
        BOOST_AUTO_TEST_CASE(Branch) {
            test_query(*this, L"一|与|业|严|丫|丿|么|义|乐|乙|也|予|于|亏|云|亚|亦|亿|仡|以|仪|仰|伊|众|优|伛|伢|但|佑|佗|余|佚|佣|佯|佻|佾|侑|依|侥|俑|俞|俣|俨|俺|倚|偃|允|元|兖|养|冤|冶|刈|刖|剡|劓|勇|匀|医|卣|印|厂|压|厌|原|厣|又|友|台|右|叶|叹|吁|吆|吖|吟|听|吲|吾|呀|呓|员|呦|咏|咦|咬|咽|咿|哑|哕|哟|哩|哽|唁|唷|喁|喑|喝|喻|嗌");
        }

    BOOST_AUTO_TEST_SUITE_END()


    BOOST_AUTO_TEST_SUITE(Pinyin)

        // slower than Base_v02
        BOOST_AUTO_TEST_CASE(LetterBranch) {
            // regex:"(y|[英])(y|[语])"
            test_query(*this, L"regex:\"(y|[" DYNAMIC_CHARSET_YY_1 L"])(y|[" DYNAMIC_CHARSET_YY_2 L"])\"");
        }

        BOOST_AUTO_TEST_CASE(LetterBranch_1) {
            // regex:"(?:y|[英])(?:y|[语])"
            test_query(*this, L"regex:\"(?:y|[" DYNAMIC_CHARSET_YY_1 L"])(?:y|[" DYNAMIC_CHARSET_YY_2 L"])\"");
        }

        BOOST_AUTO_TEST_CASE(LetterBranch_2) {
            // regex:"(?>y|[英])(?>y|[语])"
            test_query(*this, L"regex:\"(?>y|[" DYNAMIC_CHARSET_YY_1 L"])(?>y|[" DYNAMIC_CHARSET_YY_2 L"])\"");
        }

        BOOST_AUTO_TEST_CASE(Base_v02) {
            test_query(*this, L"case:regex:[yY" DYNAMIC_CHARSET_YY_1 L"][yY" DYNAMIC_CHARSET_YY_2 L"]");
        }

        BOOST_AUTO_TEST_CASE(DynamicPair) {
            test_query(*this, L"regex:[y" DYNAMIC_CHARSET_YY_1 L"][y" DYNAMIC_CHARSET_YY_2 L"]");
        }

        BOOST_AUTO_TEST_CASE(Dynamic) {
            test_query(*this, L"regex:[y" DYNAMIC_CHARSET_Y L"]{2}");
        }

        BOOST_AUTO_TEST_CASE(Base_v01) {
            test_query(*this, L"regex:[y" + pinyin_regex + L"]{2}");
        }

        BOOST_AUTO_TEST_CASE(Quantifier) {
            test_query(*this, L"regex:[y" + pinyin_regex + L"]{2}");
        }
        
        BOOST_AUTO_TEST_CASE(Repeat) {
            test_query(*this, L"regex:[y" + pinyin_regex + L"][y" + pinyin_regex + L"]");
        }

    BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()


BOOST_FIXTURE_TEST_SUITE(DynamicCharset, Everythings::Everything)
    void test_query(Everythings::Everything& ev, std::wstring_view query) {
        using namespace Everythings;

        DWORD t = timeGetTime();
        ev.query_send(query, Search::MatchCase, Request::FileName);
        QueryResults results = ev.query_get();
        t = timeGetTime() - t;
        
        BOOST_TEST_MESSAGE(results.available_num << ", " << t << "ms");
        Sleep(2000);
    }

    BOOST_AUTO_TEST_CASE(GenerateQuery) {
        test_query(*this, L"regex:[〇-𰻞]");
    }

    BOOST_AUTO_TEST_CASE(UpdateQuery) {
        test_query(*this, L"rc:");
    }

    BOOST_AUTO_TEST_CASE(UpdateQueryRegex) {
        test_query(*this, L"rc: regex:[〇-𰻞]");
    }

BOOST_AUTO_TEST_SUITE_END()