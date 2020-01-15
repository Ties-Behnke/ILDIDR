%
%% ILCTDR.cls
%% International Linear Collider - http://www.linearcollider.org
%
%-------------------------------------------------------------------------------
%% LaTeX class for the TDR
%-------------------------------------------------------------------------------
%
\NeedsTeXFormat{LaTeX2e}
\def\classversion{0.51}
\def\classdate{2013/04/16}
\ProvidesClass{ILCTDR}[\classdate\space LaTeX class for the ILC TDR (v.\space\classversion)]
\DeclareOption*{\PassOptionsToClass{\CurrentOption}{scrbook}}
\def\pubtitle{ILD Design Report}
% execution of options
\ProcessOptions
% class loading
\LoadClass{scrbook}
\RequirePackage{scrhack}
\KOMAoptions{fontsize=10pt,captions=leftbeside}
%
%-------------------------------------------------------------------------------
%% Packages loading 
%-------------------------------------------------------------------------------
%
% page layout
%\RequirePackage{fixltx2e}
\RequirePackage[latin1]{inputenc}
\RequirePackage[english]{babel}
%
%\RequirePackage[letterpaper,asymmetric,bindingoffset=36pt,left=108pt,right=54pt,top=41pt,bottom=41pt,headsep=13pt,headheight=14pt,footskip=23pt,marginparwidth=72pt]{geometry}
\RequirePackage[letterpaper,asymmetric,bindingoffset=36pt,left=78pt,right=78pt,top=41pt,bottom=41pt,headsep=13pt,headheight=14pt,footskip=23pt,marginparwidth=72pt]{geometry}
\RequirePackage[usenames,dvipsnames,svgnames,table]{xcolor}
%
% headings
%\RequirePackage[compact,explicit,calcwidth]{titlesec}
\RequirePackage{needspace}
\RequirePackage{fancyhdr}
%
% graphics
\RequirePackage{tikz}
\usetikzlibrary{calc}
\RequirePackage{graphicx}
%
% line spacing
\RequirePackage{setspace}
\onehalfspacing
\setlength{\parindent}{15pt}
%
% infix notation for counter and length
\RequirePackage{calc}
%
% fonts
\RequirePackage{lmodern,textcomp}
\renewcommand*{\familydefault}{\sfdefault}
% recommended, but very cpu intensive
\RequirePackage[letterspace=100,babel=true,tracking=true,kerning=true]{microtype}
%\RequirePackage{microtype}% enable for quicker test builds
\RequirePackage{ragged2e}
%
% captions
\RequirePackage{caption}
\RequirePackage[list=true]{subcaption}
%
% layout
\RequirePackage{floatrow}
\floatsetup[table]{style=plain, capposition=top, font=footnotesize ,capbesidewidth=sidefil,capbesideposition={left,top},margins=raggedleft,justification=RaggedRight}
\floatsetup[figure]{style=plain, capposition=bottom, font=footnotesize, capbesidewidth=sidefil,capbesideposition={left,top},margins=raggedleft,justification=RaggedRight,heightadjust=all}
\captionsetup[table]{font={footnotesize}, labelfont=bf, labelformat = simple, labelsep = period, margin=0cm,justification=RaggedRight,singlelinecheck=off}
\captionsetup[figure]{font={footnotesize}, labelfont=bf, labelformat = simple, labelsep = period, margin=0cm,justification=RaggedRight,singlelinecheck=off}
\captionsetup[sub]{font={footnotesize},justification=RaggedRight}
\captionsetup[capbesidefigure]{format=plain,labelsep=newline,margin=0cm,indention=0pt,justification=RaggedRight,singlelinecheck=off}
\captionsetup[capbesidetable]{format=plain,labelsep=newline,margin=0cm,indention=0pt,justification=RaggedRight,singlelinecheck=off}
\captionsetup[subfigure]{singlelinecheck=on,justification=RaggedRight,skip=10pt}
\captionsetup[subtable]{singlelinecheck=on,justification=RaggedRight,skip=10pt}
%
\RequirePackage{pdflscape}
%\RequirePackage{longtable}
\RequirePackage{epstopdf}
\RequirePackage{verbatim}
\RequirePackage{wasysym}
\RequirePackage[hypertexnames=false,pdfpagelayout=TwoColumnRight,bookmarksopen=true,bookmarksopenlevel=0]{hyperref}
\RequirePackage{url}
\RequirePackage{makeidx}
\RequirePackage[noprefix]{nomencl}
%\RequirePackage{chapterbib}
\RequirePackage{delarray}
% tables
\RequirePackage{tabularx}
\RequirePackage{rotating}
\RequirePackage[referable]{threeparttablex}
\RequirePackage{booktabs}
\RequirePackage{array}
\RequirePackage{multirow}
\RequirePackage{pdfpages}
\RequirePackage{eso-pic}
\RequirePackage{transparent}
\RequirePackage{type1cm}
\RequirePackage{picture}
\RequirePackage{svn-multi}
\RequirePackage{chngcntr}
\RequirePackage{import}
\RequirePackage{upgreek}
%\RequirePackage[tight]{minitoc}
%\noptcrule\noplfrule\nopltrule% minitoc: remove rule
%\renewcommand{\ptifont}{\Huge\bf}% minitoc: heading font
%\renewcommand{\mtcgapbeforeheads}{2.2cm}% minitoc: fix heading margin
%\renewcommand{\mtcgapafterheads}{-0.6cm}% minitoc: fix heading margin
\RequirePackage{cite}%important: do not change order
\RequirePackage{nameref,zref-xr}% external document references
\zxrsetup{toltxlabel}
% itemize environment that allows separation adjustment
\RequirePackage{enumitem}
\setlist{itemsep=0pt,topsep=0pt}
%\RequirePackage{ulem} 
\let\minute\undefined
\let\hour\undefined

%%FG \RequirePackage{siunitx}
%%FG \@ifpackagelater{siunitx}{2010/01/01}{\sisetup{load-configurations=abbreviations}}{}
%%FG % comment next two lines for siunits and math in serif
%%FG \sisetup{detect-weight=true,detect-display-math=true,detect-inline-family=math,detect-family=true,detect-shape=true,detect-mode=true,detect-inline-weight=text,range-phrase=--,range-units=single}
%%FG \AtBeginDocument{\sisetup{math-rm=\mathrm,text-rm=\rmfamily}}
%%FG % defining missing symbols for different siunitx versions (may require further changes)
%%FG \ifx\newunit\undefined
%%FG     \DeclareSIUnit\MV{\mega\volt}
%%FG     \DeclareSIUnit\GeV{\giga\electronvolt}
%%FG     \DeclareSIUnit\TeV{\tera\electronvolt}
%%FG \else
%%FG     \newunit\kW{\kilo\watt}
%%FG     \newunit\MW{\mega\watt}
%%FG     \newunit\um{\micro\meter}
%%FG     \newunit\us{\micro\second}
%%FG     \newunit\s{\second}
%%FG     \newunit\m{\meter}
%%FG \fi 
%

%-------------------------------------------------------------------------------
%% declare some backward compatible commands for newer LaTex versions
%-------------------------------------------------------------------------------

\DeclareOldFontCommand{\rm}{\normalfont\rmfamily}{\mathrm}
\DeclareOldFontCommand{\sf}{\normalfont\sffamily}{\mathsf}
\DeclareOldFontCommand{\tt}{\normalfont\ttfamily}{\mathtt}
\DeclareOldFontCommand{\bf}{\normalfont\bfseries}{\mathbf}
\DeclareOldFontCommand{\it}{\normalfont\itshape}{\mathit}
\DeclareOldFontCommand{\sl}{\normalfont\slshape}{\@nomath\sl}
\DeclareOldFontCommand{\sc}{\normalfont\scshape}{\@nomath\sc}
\DeclareRobustCommand*\cal{\@fontswitch\relax\mathcal}
\DeclareRobustCommand*\mit{\@fontswitch\relax\mathnormal}


%-------------------------------------------------------------------------------
%% Abbreviations
%-------------------------------------------------------------------------------
%
\newcommand{\Yieldtwentyeight}{94}
\newcommand{\Yieldthirtyfive}{75}
\newcommand{\YieldEnsemble}{37.1}
%
%-------------------------------------------------------------------------------
%% Definitions used for the ILC TDR 
%-------------------------------------------------------------------------------
%
% Figure widths
%
\newlength{\figwf} %full
\setlength{\figwf}{1.0\textwidth}
\newlength{\figwl} %large
\setlength{\figwl}{0.8\textwidth}
\newlength{\figwm} %medium
\setlength{\figwm}{0.49\textwidth}
\newlength{\figws} %small
\setlength{\figws}{0.3\textwidth}
%
% Side-cap Figure widths
\newlength{\SfigwFull}
\setlength{\SfigwFull}{\textwidth-85pt-\columnsep}
\newlength{\SfigwHalf}
\setlength{\SfigwHalf}{0.5\SfigwFull-0.5\columnsep}
%
%
% Tables
% 
\newcolumntype{R}[1]{>{\begin{turn}{90}\begin{minipage}{#1}\scriptsize}l%
<{\end{minipage}\end{turn}}%
}
%
% Names for structural elements and references to them (from cernall.sty)
% At beginning of sentence Figure, Equation, Reference should be spelled out
\RequirePackage{etoolbox}
\providecommand*{\Eq}[1][s]{\ifstrequal{#1}{b}{Equation}{Eq.}}
\providecommand*{\Eqs}[1][s]{\ifstrequal{#1}{b}{Equations}{Eqs.}}
\providecommand*{\Figure}[1][s]{\ifstrequal{#1}{b}{Figure}{Fig.}}
\providecommand*{\Figures}[1][s]{\ifstrequal{#1}{b}{Figures}{Figs.}}
\providecommand*{\Ref}[1][s]{\ifstrequal{#1}{b}{Reference}{Ref.}}
\providecommand*{\Refs}[1][s]{\ifstrequal{#1}{b}{References}{Refs.}}
\providecommand\Table{Table}
\providecommand\Tables{Tables}
\providecommand\Chapter{Chapter}
\providecommand\Chapters{Chapters}
\providecommand\Section{Section}
\providecommand\Sections{Sections}
\providecommand*\Bref[2][s]{\Ref[#1]~\cite{#2}}
\providecommand*\Brefs[2][s]{\Refs[#1]~\cite{#2}}
\providecommand*\Eref[2][s]{\Eq[#1]~(\ref{#2})}
\providecommand*\Erefs[2][s]{\Eqs[#1]~(\ref{#2})}
\providecommand*\Fref[2][s]{\Figure[#1]~\ref{#2}}
\providecommand*\Frefs[2][s]{\Figures[#1]~\ref{#2}}
\providecommand*\Sref[1]{\Section~\ref{#1}}
\providecommand*\Srefs[1]{\Sections~\ref{#1}}
\providecommand*\Cref[1]{\Chapter~\ref{#1}}
\providecommand*\Crefs[1]{\Chapters~\ref{#1}}
\providecommand*\Tref[1]{\Table~\ref{#1}}
\providecommand*\Trefs[1]{\Tables~\ref{#1}}\newcommand{\fig}[1]{figure~#1}
%
% Abbreviations and math space and characters (from cernall.sty)
%
\RequirePackage{xspace}
\providecommand*\eg{e.g.\xspace}
\providecommand*\ie{i.e.\xspace}
\providecommand*\etc{etc.\@\xspace}
\providecommand*\etal{\emph{et al.}}
\providecommand*\cf{\emph{cf.\xspace}}
\providecommand*\SPp{~}%% space before punctuation in math
%
% Accelerators
%
\providecommand{\ep}{\ensuremath{ep}\xspace}
\providecommand{\pp}{\ensuremath{pp}\xspace}
\providecommand{\ppbar}{\ensuremath{p\bar{p}}\xspace}
\providecommand{\epem}{\ensuremath{e^{+}e^{-}}\xspace}
%
% Define some commands for editor and author comments
%
\newif\ifEdNotes \EdNotestrue
\newif\ifAuthNotes \AuthNotestrue 
\def\noednotes{\EdNotesfalse}
\def\noauthnotes{\AuthNotesfalse}
\def\ednotes{\EdNotestrue}
\def\authnotes{\AuthNotestrue}
\newcommand{\doednote}[1]{{\color{red}(\textbf{Ed:} \textit{#1)}}}
\newcommand{\doauthnote}[1]{{\color{green}(\textbf{Author:} \textit{#1)}}}
\newcommand{\ednote}[1]{\ifEdNotes 
  \doednote{#1} 
\fi}
\newcommand{\authnote}[1]{\ifAuthNotes 
  \doauthnote{#1} 
\fi}
\newcommand{\doadd}[1]{{\color{green}\textbf{added:} \textit{#1}}}
% requires package ulem
%\newcommand{\dodel}[1]{{\color{green}\textbf{deleted:} \sout{\textit{#1}}}}
\newcommand{\dodel}[1]{{\color{green}\textbf{deleted:} {\textit{#1}}}}
\newcommand{\add}[1]{\ifAuthNotes 
  \doadd{#1} 
  \else  
  {#1}
\fi}
\newcommand{\del}[1]{\ifAuthNotes 
  \dodel{#1} 
\fi}
\newcommand{\repl}[2]{\ifAuthNotes 
  \dodel{#1} \doadd{#2}
  \else  
  {#2}
\fi}
\ifdefined\tdrNoNotes\noednotes\noauthnotes\fi

\newcommand {\sub}[1]{\ensuremath{_{\mathrm{#1}}}}

%
% Counters
%
\newcounter{volume}
\setcounter{volume}{0}
\newcommand{\volumetitle}{}
%
\counterwithin*{chapter}{part}
\counterwithin{figure}{chapter}
\counterwithin{table}{chapter}
%\counterwithin{table}{equation}
\counterwithin{equation}{chapter}
%

%\renewcommand{\thefigure}{\Roman{part}-\arabic{chapter}.\arabic{figure}}
%\renewcommand{\thetable}{\Roman{part}-\arabic{chapter}.\arabic{table}}
%\renewcommand{\theequation}{\Roman{part}-\arabic{chapter}.\arabic{equation}}
\renewcommand{\thefigure}{\arabic{chapter}.\arabic{figure}}
\renewcommand{\thetable}{\arabic{chapter}.\arabic{table}}
\renewcommand{\theequation}{\arabic{chapter}.\arabic{equation}}


%
% set sectioning level
%
\setcounter{secnumdepth}{4}
%
%-------------------------------------------------------------------------------
%% Bibliography
%-------------------------------------------------------------------------------
%
\newcommand{\doi}[1]{DOI: \htmladdnormallink{#1}{http://dx.doi.org/#1}}
\newcommand{\doierr}[2]{DOI: \htmladdnormallink{#1}{http://dx.doi.org/#1},
                                      \htmladdnormallink{#2}{http://dx.doi.org/#2} [Erratum]}
\newcommand{\jacow}[1]{JACoW: \htmladdnormallink{#1}{http://accelconf.web.cern.ch/AccelConf/#1}}
\newcommand{\edms}[1]{EDMS ID: \htmladdnormallink{#1}{http://ilc-edmsdirect.desy.de/ilc-edmsdirect/item.jsp?edmsid=#1}}
\newcommand{\edmsres}[1]{EDMS ID: \htmladdnormallink{#1}{http://ilc-edmsdirect.desy.de/ilc-edmsdirect/item.jsp?edmsid=#1} (restricted access)}
\newcommand{\arxiv}[1]{\htmladdnormallink{arxiv:#1}{http://arxiv.org/abs/#1}}
\newcommand{\arxivnew}[2]{\htmladdnormallink{arXiv:#1 [#2]}{http://arxiv.org/abs/#1}}
\newcommand{\desy}[2]{\htmladdnormallink{#1}{http://www-library.desy.de/cgi-bin/showprep.pl?#2}}
\newcommand{\fermilab}[2]{\htmladdnormallink{#1}{http://lss.fnal.gov/cgi-bin/find_paper.pl?#2}}
\newcommand{\cdsweb}[2]{\htmladdnormallink{#1}{http://cdsweb.cern.ch/record/#2}}
\newcommand{\ilcdoc}[2]{\htmladdnormallink{#1}{http://ilcdoc.linearcollider.org/record/#2}}
\newcommand{\slac}[1]{\htmladdnormallink{#1}{http://www-public.slac.stanford.edu/sciDoc/docMeta.aspx?slacPubNumber=#1}}
\newcommand{\eurotev}[2]{\htmladdnormallink{#1}{http://www.eurotev.org/reports__presentations/#2}}
\newcommand{\ilcasia}[2]{\htmladdnormallink{#1}{http://ilc.kek.jp/ILCAsiaNotes/#2}}
%
%\newcommand{\artitle}[1]{[``#1'']}
\newcommand{\artitle}[1]{}
\newcommand{\artitlekeep}[1]{``#1''}
\newcommand{\booktitle}[1]{``#1''}

% Concise version:

\newcommand{\srfeightynine}[3]{\emph{Proc. SRF'89, Tsukuba, 1989, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF89/papers/#3})}}
\newcommand{\srfninetythree}[3]{\emph{Proc. SRF'93, Newport News, VA, 1993, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF93/papers/#3})}}
\newcommand{\srfninetyfive}[3]{\emph{Proc. SRF'95, Gif-sur-Yvette, 1995; Part.\ Accel.\ {\bf 53} (1996) #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF95/papers/#3})}}
\newcommand{\srfninetyseven}[3]{{\it Proc. SRF'97, Abano Terme, Padua, Italy, 1997, Part.\ Accel.\ {\bf 60} (1998) (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF97/papers/#3})}}
\newcommand{\linacninetyeight}[2]{\emph{Proc. Linac~98, Chicago, IL, 1998, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/l98/PAPERS/#2.PDF})}}
\newcommand{\pacninetynine}[2]{\emph{Proc. PAC~99, New York, NY, 1999, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/p99/PAPERS/#2.PDF})}}
\newcommand{\srfninetynine}[3]{\emph{Proc. SRF'99, Santa Fe, NM, 1999, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF99/papers/#3})}}
\newcommand{\epaczero}[2]{\emph{Proc. EPAC~2000, Vienna, Austria, 2000, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/e00/PAPERS/#2.PDF})}}
\newcommand{\pacone}[2]{\emph{Proc. PAC 2001, Chicago, IL, 2001, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/p01/PAPERS/#2.PDF})}}
\newcommand{\srfone}[3]{\emph{Proc. SRF 2001, Tsukuba, 2001, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF2001/papers/#3})}}
\newcommand{\epactwo}[2]{\emph{Proc. EPAC~2002, Paris, France., 2002, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/e02/papers/#2.PDF})}}
\newcommand{\pacthree}[2]{\emph{Proc. PAC~03, Portland, OR, 12-16 May 2003, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/p03/PAPERS/#2.PDF})}}
\newcommand{\srfthree}[2]{\emph{Proc. SRF~2003, Travem\"unde, Germany, 2003, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF2003/papers/#2.PDF})}}
\newcommand{\linacfour}[2]{\emph{Proc. LINAC~2004, L\"ubeck, Germany, 2004, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/l04/papers/#2.PDF})}}
\newcommand{\epacfour}[2]{\emph{Proc. EPAC~04, Lucerne, Switzerland, 2004, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/e04/papers/#2.PDF})}}
\newcommand{\pacfive}[2]{\emph{Proc. PAC~05, Knoxville, TN, 2005, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/p05/PAPERS/#2.PDF})}}
\newcommand{\srffive}[3]{\emph{Proc. SRF~2005, Cornell, Ithaca, NY, 2005, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF2005/papers/#3})}}
\newcommand{\epacsix}[2]{\emph{Proc. EPAC~06, Edinburgh, Scotland, 2006, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/e06/papers/#2.PDF})}}
\newcommand{\linacsix}[2]{\emph{Proc. LINAC~06, Knoxville, TN, 2006, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/l06/PAPERS/#2.PDF})}}
\newcommand{\pacseven}[2]{\emph{Proc. PAC~07, Albuquerque, NM, 2007, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/p07/PAPERS/#2.PDF})}}
\newcommand{\srfseven}[2]{\emph{Proc. SRF~2007, Beijing, China, 2007, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF2007/papers/#2.PDF})}}
\newcommand{\epaceight}[3]{\emph{Proc. EPAC~08, Magazzini del Cotone, Italy, 2008, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/e08/papers/#3})}}
\newcommand{\linaceight}[3]{\emph{Proc. LINAC~08, Victoria, BC, 2008, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/LINAC08/papers/#3})}}
\newcommand{\pacnine}[3]{\emph{Proc. PAC~09, Vancouver, BC, Canada, 2009, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/PAC2009/papers/#3})}}
\newcommand{\srfnine}[3]{\emph{Proc. SRF~2009, Berlin, Germany, 2009, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF2009/papers/#3})}}
\newcommand{\ipacten}[3]{\emph{Proc. IPAC'10, Kyoto, Japan, 2010, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/IPAC10/papers/#3})}}
\newcommand{\linacten}[3]{\emph{Proc. LINAC~10, Tsukuba, Japan, 2010, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/LINAC10/papers/#3})}}
\newcommand{\ecloudten}[2]{\emph{To appear in Proc. ECLOUD'10, Cornell, Ithaca, NY, 2010,(\htmladdnormallink{{slides}}{http://edms.classe.cornell.edu/agenda/contributionDisplay.py?contribId=#1&sessionId=#2&confId=10})}}
\newcommand{\feleleven}[3]{\emph{Proc. FEL'11, Shanghai, China, 2011, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/FEL2011/papers/#3})}}
\newcommand{\ipaceleven}[3]{\emph{Proc. IPAC~2011, San Sebastian, Spain, 2011, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/IPAC2011/papers/#3})}}
\newcommand{\paceleven}[3]{\emph{Proc. PAC~11, New York, NY, 2011, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/PAC2009/papers/#3})}}
\newcommand{\srfeleven}[3]{\emph{Proc. SRF~2011, Chicago, IL, 2011, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/SRF2011/papers/#3})}}
\newcommand{\ipactwelve}[3]{\emph{Proc. IPAC'12, New Orleans, LA, 2012, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/IPAC2012/papers/#3})}}
%\newcommand{\linactwelve}[3]{\emph{Proc. LINAC~12, Tel-Aviv, Israel, Sep. 9-14, 2012, pp. #1 (\htmladdnormallink{{#2}}{http://accelconf.web.cern.ch/AccelConf/LINAC12/papers/#3})}}
\newcommand{\linactwelve}[3]{\emph{Proc. LINAC~12, Tel-Aviv, Israel, Sep. 9-14, 2012.}}

%
%-------------------------------------------------------------------------------
%% Figures
%-------------------------------------------------------------------------------
%
\RequirePackage{multicol}
\newenvironment{twofigures}
{
    \newif\if@incap%
    \let\oldcaption\caption%
    \renewcommand{\caption}[2][]{%
        \if@incap%
            \oldcaption[##1]{##2}%
        \else%
            \@incaptrue%
            \captionof{figure}[##1]{##2}%
            \@incapfalse%
        \fi%
    }%
    \renewenvironment{figure}%
        {\par\medskip\noindent\minipage{\linewidth}}%
        {\endminipage\par\medskip}%
    \begin{multicols}{2}%
}
{\end{multicols}}
%
%-------------------------------------------------------------------------------
%% Part page (style and parttitle command)
%-------------------------------------------------------------------------------
%
\newcommand\parttitle{}
\let\Oldpart\part
\renewcommand{\part}[1]{\Oldpart{#1}\renewcommand{\parttitle}{#1}}
%
% Add editors to part page
%
\makeatletter
\def\@endpart{
  \vskip 60\p@
  \ifx\theeditors\undefined\else{
    \centering
    \interlinepenalty \@M
    \LARGE Editors:\par
    \vskip 10\p@
    \LARGE \theeditors\par}\fi%
  \vfil\thispagestyle{empty}\newpage
  \if@twoside%
    \if@openright
      \null
      \thispagestyle{empty}%
      \newpage
    \fi
  \fi
  \if@tempswa
    \twocolumn
  \fi}
\makeatother
%
%-------------------------------------------------------------------------------
%% Header and footer
%-------------------------------------------------------------------------------
%
\pagestyle{fancy}
\fancyhead{}
\fancyfoot{}
\fancyhead[LE]{\scriptsize\nouppercase{\leftmark}}
\fancyhead[RO]{\scriptsize\nouppercase{\rightmark}}
%\fancyfootoffset[LE]{\marginparwidth}
\fancyfootoffset[LE,RO]{\marginparwidth}
%\fancyfoot[LE]{\scriptsize\makebox[\marginparwidth]{\hfill\thepage\qquad}\pubtitle \Roman{volume}\ifdefempty{\parttitle}{}{, \partname\ \Roman{part}}}
\fancyfoot[RO]{\scriptsize\pubtitle: \Roman{volume}\ifdefempty{\parttitle}{}{, \partname\ \Roman{part}}\makebox[\marginparwidth]{\qquad\thepage\hfill}}



\fancyfoot[LO]{\scriptsize\volumetitle\ifdefempty{\parttitle}{}{: \parttitle}}
%\fancyfoot[CE]{\footnotesize{ILC Technical Design Report: Volume I}}
%\fancyfoot[CO]{\footnotesize\partname\ \thepart:\ \parttitle}
%\fancyfoot[RO]{\footnotesize\thepage}
\renewcommand{\headrulewidth}{0pt}
\renewcommand{\footrulewidth}{0pt}
%
\fancypagestyle{plain}{%
  \fancyhf{}%
  \fancyfootoffset[LE,RO]{\marginparwidth}%
  \fancyfoot[LE]{\scriptsize\makebox[\marginparwidth]{\hfill\thepage\qquad}}%
  \fancyfoot[RO]{\scriptsize\makebox[\marginparwidth]{\qquad\thepage\hfill}}%
}
%
%-------------------------------------------------------------------------------
%% Watermark
%-------------------------------------------------------------------------------
%
% Watermark on top
\newcommand{\editingstatus}[2] {
  \ClearShipoutPicture\AddToShipoutPicture{
        \AtPageUpperLeft{
            \hspace{.5\paperwidth}
            \raisebox{-\baselineskip}{
                \makebox[0pt][c]{\Large \color{#2}{#1}}
            }
        }
    }
}
% Large watermark
\makeatletter
\newcommand{\thiswatermarktext}[3]{%
    \AddToShipoutPicture*{%
        \setlength{\@tempdimb}{.5\paperwidth}%
        \setlength{\@tempdimc}{.5\paperheight}%
        \setlength{\unitlength}{1pt}%
        \put(\strip@pt\@tempdimb,\strip@pt\@tempdimc){%
            \makebox(0,0){\transparent{0.75}\rotatebox{45}{\color{#2}%
            {\fontsize{#1}{#1}\selectfont{#3}}}}%
        }%
    }%
}
\makeatother

% PDF bookmark for each TOC
\RequirePackage{etoolbox}
\pretocmd{\parttoc}{\pdfbookmark{\ptctitle}{\contentsname\thepart}}{}{}
% Nested tabular macro
\NewDocumentCommand{\minitab}{O{l}O{}m}{%
  \renewcommand{\arraystretch}{.9}\setstretch{1}%
  \IfNoValueTF{#2}{%
    \begin{tabular}{@{}#1@{}}%
  }{%
    \begin{tabular}[#2]{@{}#1@{}}%
  }#3\end{tabular}%
}
%\newcommand{\minitab}[2][1]{{\renewcommand{\arraystretch}{0.9}\begin{tabular}{@{}#1@{}}#2\end{tabular}}}
% Table Background Color
%\RequirePackage{etoolbox,letltxmacro}
%\newsavebox{\tabularbox}
%\AtBeginEnvironment{table}{%
%  \LetLtxMacro\tabular\colortabular
%  \LetLtxMacro\endtabular\endcolortabular
%}
%\AtBeginDocument{%
%\BeforeBeginEnvironment{tabular*}{\tikzpicture\node[fill=gray!10,anchor=base,inner sep=0pt,outer sep=0pt]\bgroup}%
%\AfterEndEnvironment{tabular*}{\egroup;\endtikzpicture}%
%\LetLtxMacro\colortabular\tabular
%\LetLtxMacro\endcolortabular\endtabular
%\pretocmd{\colortabular}%
%  {\setbox\tabularbox=\hbox\bgroup}{}{}
%\apptocmd{\endcolortabular}%
%  {\egroup\begingroup\fboxsep=0pt\colorbox{gray!10}{\box\tabularbox}\endgroup}{}{}
%}



%
% Tikz layers
%
\pgfdeclarelayer{background}
\pgfsetlayers{background,main}
%
% Titles
%
\setkomafont{chapter}{\fontfamily{pag}\selectfont\Huge}%
\setkomafont{section}{\fontfamily{pag}\selectfont\Large}
\setkomafont{subsection}{\fontfamily{pag}\selectfont\large}
\setkomafont{subsubsection}{\fontfamily{pag}}
%\setkomafont{section}{\normalfont\bfseries\selectfont\Large}
%\setkomafont{subsection}{\normalfont\bfseries\selectfont\large}
%\setkomafont{subsubsection}{\normalfont\bfseries}
\setkomafont{sectioning}{\normalfont}
%
\makeatletter
\patchcmd{\ttlh@display}{\strut}{}{}{}
%\beforetitleunit=0ex\@plus0ex\@minus0ex
%\aftertitleunit=0ex\@plus0ex\@minus0ex
\makeatother
%
\newlength\titlemarginwidth
\setlength\titlemarginwidth{54pt}
%
% boxed section titles
\newlength{\someheight}
\newcommand\boxedsection[6]{{%
  \setstretch{1}%
  \usekomafont{#2}%
  \begin{tikzpicture}[inner sep=0, inner ysep=1ex,outer sep=0pt,anchor=base west,rectangle]%
      \node[text width=\titlemarginwidth-\columnsep,color=#3] at (0,0) (numnode) {\hspace{1ex}\vphantom{yZ}#6};%
      \node[text width=\textwidth] at ($(numnode.base east)+(\columnsep-1pt,0)$) (textnode) {\vphantom{yZ}#1};%
      \coordinate (x) at (0,0|-textnode.south west);
    \begin{pgfonlayer}{background}%
      \fill[color=#4] (0,0|-numnode.north) rectangle ($(textnode.south west)+(1.5pt,1.5pt)$|-textnode.south west);%
      \fill[color=white] (numnode.north east) rectangle ($(textnode.south east)+(0,1pt)$);%
      \draw[#5,line width=1pt] (0,0|-numnode.north) -- (textnode.north east);%
      \draw[#5,line width=1pt] ($(x)+(0,1.5pt)$) -- ($(textnode.south east)+(0,1.5pt)$);%
      \ifstrequal{#2}{section}{%
          \draw[#5,line width=1pt] ($(textnode.north east)-(.5pt,0)$) -- ($(textnode.south east)-(.5pt,-1.5pt)$);%
      }{}%
    \end{pgfonlayer}%
  \end{tikzpicture}%
}}%
%
%\titlespacing*{\chapter}{-\columnsep-0.5\titlemarginwidth}{50pt}{40pt}
%\titleformat{\chapter}[display]%
%  {\filright\usekomafont{chapter}\setstretch{1}}%
%  {\chaptertitlename\ \thechapter}%
%  {0em}%
%  {#1}%
%
%\titlespacing*{\section}{-\titlemarginwidth}{*3}{*0}
%\titleformat{\section}%
%  {\needspace{2in}}%
%  {}{0pt}{\boxedsection{#1}{section}{white}{black}{black}{\thesection}\lineskiplimit=-\maxdimen%
%  {}{0pt}{\boxedsection{#1}{section}{white}{black}{white}{\thesection}\lineskiplimit=-\maxdimen%
%}[\titlesechack]%
%
%\titlespacing*{\subsection}{-\titlemarginwidth}{*3}{*0}
%\titleformat{\subsection}%
%  {\needspace{1in}}%
%  {}{0pt}{\boxedsection{#1}{subsection}{black}{gray!30}{white}{\thesubsection}\lineskiplimit=-\maxdimen%
%}[\titlesechack]%
%
%\titlespacing*{\subsubsection}{-\titlemarginwidth}{*3}{*0}
%\titleformat{\subsubsection}%
%  {\needspace{1in}}%
%  {}{0pt}{\boxedsection{#1}{subsubsection}{black}{white}{white}{\thesubsubsection}\lineskiplimit=-\maxdimen%
%}[\titlesechack]%
%
%\titleformat{\paragraph}[runin]{}{}{0pt}{\underline{#1}}
%\titleformat{\subparagraph}[runin]{}{}{0pt}{\emph{#1}}
%
% corrects spacing after section heading
\makeatletter
\newcommand{\titlesechack}{%
  \ifthispageodd{\vspace{1.4pt}}{\vspace{0.31ex}}%
}%
\newcommand{\vspacekludge}[1]{\vspace{#1}}%
\makeatother
%
% Support for footnotes below table, and commands for proper alignment inside komascript captionbeside
\setcaphanging\setcapindent{0pt}% KOMAscript captions
\newcommand{\SCsetupKOMA}{%
  \RawFloats\setcapindent*{0pt}\captionsetup{labelsep=none}\KOMAoptions{captions=topbeside}%
}%
\BeforeBeginEnvironment{captionbeside}{\SCsetupKOMA}%
% Patch \toprule to properly top align the table with side caption (assuming all tables have a top rule)
\makeatletter
\newcommand\SCtoprule{%
  \multicolumn1c{%
    \global\backup@length\ht\@arstrutbox%
    \global\advance\backup@length\dp\@arstrutbox%
    \global\advance\backup@length\heavyrulewidth%
    \raise\heavyrulewidth\copy\@arstrutbox%
  }\\[\dimexpr-\backup@length]\oldtoprule%
}
\makeatother
\AtBeginEnvironment{captionbeside}{%
  \let\oldtoprule\toprule%
  \let\toprule\SCtoprule%
}%
% tablenotes font
\setTableNoteFont{\scriptsize}
% bullet lists inside tabular (parbox), no label margin
\makeatletter
\newcommand*{\compress}{\@minipagetrue}
\makeatother
\newenvironment{tlist}{\compress\begin{itemize}[labelwidth=!,labelsep*=0.5ex,labelindent=!,leftmargin=*,parsep=0pt,partopsep=0pt]}{\end{itemize}\vspace{0.5ex}}%
% consistent cmidrule command \tcmidrule
\RequirePackage{xparse}
\newcommand{\tcmidrule}{\noalign\bgroup\tcmidruleaux{}}
\ExplSyntaxOn
\makeatletter
\NewDocumentCommand{\tcmidruleaux}{
  m%
  O{\tabcolsep}%
  O{\tabcolsep}%
  m%
}{%
  \peek_meaning_remove_ignore_spaces:NTF  \tcmidrule
  { \tcmidruleaux { #1 \cmidrule[\cmidrulewidth](l{#2}r{#3}){#4} } }
  { \egroup #1 \cmidrule[\cmidrulewidth](l{#2}r{#3}){#4} }
}
% Add TOC to pdf index
\BeforeTOCHead{%
  \cleardoublepage
  \edef\@tempa{%
    \noexpand\pdfbookmark[0]{\list@fname}{\@currext}%
  }\@tempa
}
\makeatother
\endinput
