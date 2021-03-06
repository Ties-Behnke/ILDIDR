void compare_detector_mrec_lr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 29 11:37:59 2019) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,626,800,600);
   gStyle->SetOptStat(0);
   c->Range(-113.3333,-0.01024176,553.3333,0.04665689);
   c->SetFillColor(10);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.17);
   c->SetRightMargin(0.08);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.18);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   
   THStack *stk = new THStack();
   stk->SetName("stk");
   stk->SetTitle("");
   
   TH1F *stk_stack_4 = new TH1F("stk_stack_4","",100,0,500);
   stk_stack_4->SetMinimum(0);
   stk_stack_4->SetMaximum(0.042105);
   stk_stack_4->SetDirectory(0);
   stk_stack_4->SetStats(0);
   stk_stack_4->SetLineWidth(2);
   stk_stack_4->SetMarkerStyle(20);
   stk_stack_4->SetMarkerSize(0.7);
   stk_stack_4->GetXaxis()->SetTitle("Recoil Mass [GeV]");
   stk_stack_4->GetXaxis()->SetNdivisions(506);
   stk_stack_4->GetXaxis()->SetLabelFont(42);
   stk_stack_4->GetXaxis()->SetLabelOffset(0.015);
   stk_stack_4->GetXaxis()->SetLabelSize(0.06);
   stk_stack_4->GetXaxis()->SetTitleSize(0.07);
   stk_stack_4->GetXaxis()->SetTitleOffset(1);
   stk_stack_4->GetXaxis()->SetTitleFont(42);
   stk_stack_4->GetYaxis()->SetTitle("a.u.");
   stk_stack_4->GetYaxis()->SetNdivisions(506);
   stk_stack_4->GetYaxis()->SetLabelFont(42);
   stk_stack_4->GetYaxis()->SetLabelOffset(0.015);
   stk_stack_4->GetYaxis()->SetLabelSize(0.06);
   stk_stack_4->GetYaxis()->SetTitleSize(0.07);
   stk_stack_4->GetYaxis()->SetTitleOffset(1.1);
   stk_stack_4->GetYaxis()->SetTitleFont(42);
   stk_stack_4->GetZaxis()->SetLabelFont(42);
   stk_stack_4->GetZaxis()->SetLabelOffset(0.015);
   stk_stack_4->GetZaxis()->SetLabelSize(0.06);
   stk_stack_4->GetZaxis()->SetTitleSize(0.07);
   stk_stack_4->GetZaxis()->SetTitleOffset(1.1);
   stk_stack_4->GetZaxis()->SetTitleFont(42);
   stk->SetHistogram(stk_stack_4);
   
   
   TH1F *h0_stack_1 = new TH1F("h0_stack_1","",100,0,500);
   h0_stack_1->SetBinContent(0,0.0118);
   h0_stack_1->SetBinContent(2,0.0001);
   h0_stack_1->SetBinContent(3,0.0003);
   h0_stack_1->SetBinContent(4,0.0003);
   h0_stack_1->SetBinContent(5,0.0004);
   h0_stack_1->SetBinContent(6,0.0007);
   h0_stack_1->SetBinContent(7,0.00095);
   h0_stack_1->SetBinContent(8,0.00105);
   h0_stack_1->SetBinContent(9,0.0013);
   h0_stack_1->SetBinContent(10,0.0017);
   h0_stack_1->SetBinContent(11,0.00225);
   h0_stack_1->SetBinContent(12,0.00285);
   h0_stack_1->SetBinContent(13,0.0028);
   h0_stack_1->SetBinContent(14,0.003);
   h0_stack_1->SetBinContent(15,0.00445);
   h0_stack_1->SetBinContent(16,0.0055);
   h0_stack_1->SetBinContent(17,0.0068);
   h0_stack_1->SetBinContent(18,0.008);
   h0_stack_1->SetBinContent(19,0.01005);
   h0_stack_1->SetBinContent(20,0.01245);
   h0_stack_1->SetBinContent(21,0.01705);
   h0_stack_1->SetBinContent(22,0.022);
   h0_stack_1->SetBinContent(23,0.0254);
   h0_stack_1->SetBinContent(24,0.03145);
   h0_stack_1->SetBinContent(25,0.03445);
   h0_stack_1->SetBinContent(26,0.03705);
   h0_stack_1->SetBinContent(27,0.0401);
   h0_stack_1->SetBinContent(28,0.0385);
   h0_stack_1->SetBinContent(29,0.03885);
   h0_stack_1->SetBinContent(30,0.0385);
   h0_stack_1->SetBinContent(31,0.0366);
   h0_stack_1->SetBinContent(32,0.03485);
   h0_stack_1->SetBinContent(33,0.0334);
   h0_stack_1->SetBinContent(34,0.03345);
   h0_stack_1->SetBinContent(35,0.0279);
   h0_stack_1->SetBinContent(36,0.0259);
   h0_stack_1->SetBinContent(37,0.026);
   h0_stack_1->SetBinContent(38,0.0225);
   h0_stack_1->SetBinContent(39,0.0242);
   h0_stack_1->SetBinContent(40,0.02165);
   h0_stack_1->SetBinContent(41,0.0196);
   h0_stack_1->SetBinContent(42,0.01905);
   h0_stack_1->SetBinContent(43,0.01675);
   h0_stack_1->SetBinContent(44,0.01665);
   h0_stack_1->SetBinContent(45,0.0153);
   h0_stack_1->SetBinContent(46,0.01415);
   h0_stack_1->SetBinContent(47,0.0142);
   h0_stack_1->SetBinContent(48,0.0119);
   h0_stack_1->SetBinContent(49,0.0119);
   h0_stack_1->SetBinContent(50,0.00995);
   h0_stack_1->SetBinContent(51,0.0104);
   h0_stack_1->SetBinContent(52,0.01095);
   h0_stack_1->SetBinContent(53,0.0081);
   h0_stack_1->SetBinContent(54,0.00895);
   h0_stack_1->SetBinContent(55,0.0083);
   h0_stack_1->SetBinContent(56,0.00815);
   h0_stack_1->SetBinContent(57,0.007);
   h0_stack_1->SetBinContent(58,0.00615);
   h0_stack_1->SetBinContent(59,0.00625);
   h0_stack_1->SetBinContent(60,0.00615);
   h0_stack_1->SetBinContent(61,0.00565);
   h0_stack_1->SetBinContent(62,0.00585);
   h0_stack_1->SetBinContent(63,0.0063);
   h0_stack_1->SetBinContent(64,0.00545);
   h0_stack_1->SetBinContent(65,0.0048);
   h0_stack_1->SetBinContent(66,0.005);
   h0_stack_1->SetBinContent(67,0.00395);
   h0_stack_1->SetBinContent(68,0.0042);
   h0_stack_1->SetBinContent(69,0.0049);
   h0_stack_1->SetBinContent(70,0.0046);
   h0_stack_1->SetBinContent(71,0.00425);
   h0_stack_1->SetBinContent(72,0.0033);
   h0_stack_1->SetBinContent(73,0.0033);
   h0_stack_1->SetBinContent(74,0.00365);
   h0_stack_1->SetBinContent(75,0.0031);
   h0_stack_1->SetBinContent(76,0.00315);
   h0_stack_1->SetBinContent(77,0.00205);
   h0_stack_1->SetBinContent(78,0.00265);
   h0_stack_1->SetBinContent(79,0.0019);
   h0_stack_1->SetBinContent(80,0.00145);
   h0_stack_1->SetBinContent(81,0.0015);
   h0_stack_1->SetBinContent(82,0.0009);
   h0_stack_1->SetBinContent(83,0.0004);
   h0_stack_1->SetBinContent(85,0.00025);
   h0_stack_1->SetBinContent(86,5e-05);
   h0_stack_1->SetBinContent(87,0.00015);
   h0_stack_1->SetBinContent(89,0.00015);
   h0_stack_1->SetBinContent(90,5e-05);
   h0_stack_1->SetBinContent(91,0.00015);
   h0_stack_1->SetBinContent(92,0.0001);
   h0_stack_1->SetBinContent(94,0.00015);
   h0_stack_1->SetBinContent(95,0.0002);
   h0_stack_1->SetBinContent(97,5e-05);
   h0_stack_1->SetBinError(0,0.0007681146);
   h0_stack_1->SetBinError(2,7.071068e-05);
   h0_stack_1->SetBinError(3,0.0001224745);
   h0_stack_1->SetBinError(4,0.0001224745);
   h0_stack_1->SetBinError(5,0.0001414214);
   h0_stack_1->SetBinError(6,0.0001870829);
   h0_stack_1->SetBinError(7,0.0002179449);
   h0_stack_1->SetBinError(8,0.0002291288);
   h0_stack_1->SetBinError(9,0.000254951);
   h0_stack_1->SetBinError(10,0.0002915476);
   h0_stack_1->SetBinError(11,0.0003354102);
   h0_stack_1->SetBinError(12,0.0003774917);
   h0_stack_1->SetBinError(13,0.0003741657);
   h0_stack_1->SetBinError(14,0.0003872983);
   h0_stack_1->SetBinError(15,0.0004716991);
   h0_stack_1->SetBinError(16,0.0005244044);
   h0_stack_1->SetBinError(17,0.0005830952);
   h0_stack_1->SetBinError(18,0.0006324555);
   h0_stack_1->SetBinError(19,0.0007088723);
   h0_stack_1->SetBinError(20,0.0007889867);
   h0_stack_1->SetBinError(21,0.0009233093);
   h0_stack_1->SetBinError(22,0.001048809);
   h0_stack_1->SetBinError(23,0.001126943);
   h0_stack_1->SetBinError(24,0.001253994);
   h0_stack_1->SetBinError(25,0.00131244);
   h0_stack_1->SetBinError(26,0.001361066);
   h0_stack_1->SetBinError(27,0.00141598);
   h0_stack_1->SetBinError(28,0.001387444);
   h0_stack_1->SetBinError(29,0.001393736);
   h0_stack_1->SetBinError(30,0.001387444);
   h0_stack_1->SetBinError(31,0.001352775);
   h0_stack_1->SetBinError(32,0.001320038);
   h0_stack_1->SetBinError(33,0.001292285);
   h0_stack_1->SetBinError(34,0.001293252);
   h0_stack_1->SetBinError(35,0.001181101);
   h0_stack_1->SetBinError(36,0.001137981);
   h0_stack_1->SetBinError(37,0.001140175);
   h0_stack_1->SetBinError(38,0.00106066);
   h0_stack_1->SetBinError(39,0.0011);
   h0_stack_1->SetBinError(40,0.001040433);
   h0_stack_1->SetBinError(41,0.0009899495);
   h0_stack_1->SetBinError(42,0.0009759611);
   h0_stack_1->SetBinError(43,0.0009151503);
   h0_stack_1->SetBinError(44,0.0009124144);
   h0_stack_1->SetBinError(45,0.0008746428);
   h0_stack_1->SetBinError(46,0.0008411302);
   h0_stack_1->SetBinError(47,0.000842615);
   h0_stack_1->SetBinError(48,0.0007713624);
   h0_stack_1->SetBinError(49,0.0007713624);
   h0_stack_1->SetBinError(50,0.0007053368);
   h0_stack_1->SetBinError(51,0.0007211103);
   h0_stack_1->SetBinError(52,0.0007399324);
   h0_stack_1->SetBinError(53,0.0006363961);
   h0_stack_1->SetBinError(54,0.0006689544);
   h0_stack_1->SetBinError(55,0.0006442049);
   h0_stack_1->SetBinError(56,0.0006383573);
   h0_stack_1->SetBinError(57,0.000591608);
   h0_stack_1->SetBinError(58,0.0005545268);
   h0_stack_1->SetBinError(59,0.000559017);
   h0_stack_1->SetBinError(60,0.0005545268);
   h0_stack_1->SetBinError(61,0.0005315073);
   h0_stack_1->SetBinError(62,0.0005408327);
   h0_stack_1->SetBinError(63,0.0005612486);
   h0_stack_1->SetBinError(64,0.0005220153);
   h0_stack_1->SetBinError(65,0.0004898979);
   h0_stack_1->SetBinError(66,0.0005);
   h0_stack_1->SetBinError(67,0.0004444097);
   h0_stack_1->SetBinError(68,0.0004582576);
   h0_stack_1->SetBinError(69,0.0004949747);
   h0_stack_1->SetBinError(70,0.0004795832);
   h0_stack_1->SetBinError(71,0.0004609772);
   h0_stack_1->SetBinError(72,0.0004062019);
   h0_stack_1->SetBinError(73,0.0004062019);
   h0_stack_1->SetBinError(74,0.0004272002);
   h0_stack_1->SetBinError(75,0.0003937004);
   h0_stack_1->SetBinError(76,0.0003968627);
   h0_stack_1->SetBinError(77,0.0003201562);
   h0_stack_1->SetBinError(78,0.0003640055);
   h0_stack_1->SetBinError(79,0.0003082207);
   h0_stack_1->SetBinError(80,0.0002692582);
   h0_stack_1->SetBinError(81,0.0002738613);
   h0_stack_1->SetBinError(82,0.000212132);
   h0_stack_1->SetBinError(83,0.0001414214);
   h0_stack_1->SetBinError(85,0.0001118034);
   h0_stack_1->SetBinError(86,5e-05);
   h0_stack_1->SetBinError(87,8.660254e-05);
   h0_stack_1->SetBinError(89,8.660254e-05);
   h0_stack_1->SetBinError(90,5e-05);
   h0_stack_1->SetBinError(91,8.660254e-05);
   h0_stack_1->SetBinError(92,7.071068e-05);
   h0_stack_1->SetBinError(94,8.660254e-05);
   h0_stack_1->SetBinError(95,0.0001);
   h0_stack_1->SetBinError(97,5e-05);
   h0_stack_1->SetEntries(20000);
   h0_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   h0_stack_1->SetLineColor(ci);
   h0_stack_1->SetLineWidth(3);
   h0_stack_1->SetMarkerStyle(20);
   h0_stack_1->SetMarkerSize(0.7);
   h0_stack_1->GetXaxis()->SetNdivisions(506);
   h0_stack_1->GetXaxis()->SetLabelFont(42);
   h0_stack_1->GetXaxis()->SetLabelOffset(0.015);
   h0_stack_1->GetXaxis()->SetLabelSize(0.06);
   h0_stack_1->GetXaxis()->SetTitleSize(0.07);
   h0_stack_1->GetXaxis()->SetTitleOffset(1);
   h0_stack_1->GetXaxis()->SetTitleFont(42);
   h0_stack_1->GetYaxis()->SetNdivisions(506);
   h0_stack_1->GetYaxis()->SetLabelFont(42);
   h0_stack_1->GetYaxis()->SetLabelOffset(0.015);
   h0_stack_1->GetYaxis()->SetLabelSize(0.06);
   h0_stack_1->GetYaxis()->SetTitleSize(0.07);
   h0_stack_1->GetYaxis()->SetTitleOffset(1.1);
   h0_stack_1->GetYaxis()->SetTitleFont(42);
   h0_stack_1->GetZaxis()->SetLabelFont(42);
   h0_stack_1->GetZaxis()->SetLabelOffset(0.015);
   h0_stack_1->GetZaxis()->SetLabelSize(0.06);
   h0_stack_1->GetZaxis()->SetTitleSize(0.07);
   h0_stack_1->GetZaxis()->SetTitleOffset(1.1);
   h0_stack_1->GetZaxis()->SetTitleFont(42);
   stk->Add(h0_stack_1,"");
   
   TH1F *h1_stack_2 = new TH1F("h1_stack_2","",100,0,500);
   h1_stack_2->SetBinContent(0,0.01265);
   h1_stack_2->SetBinContent(1,5e-05);
   h1_stack_2->SetBinContent(2,0.0002);
   h1_stack_2->SetBinContent(3,0.00025);
   h1_stack_2->SetBinContent(4,0.0002);
   h1_stack_2->SetBinContent(5,0.0003);
   h1_stack_2->SetBinContent(6,0.0006);
   h1_stack_2->SetBinContent(7,0.00095);
   h1_stack_2->SetBinContent(8,0.00075);
   h1_stack_2->SetBinContent(9,0.00105);
   h1_stack_2->SetBinContent(10,0.0012);
   h1_stack_2->SetBinContent(11,0.0019);
   h1_stack_2->SetBinContent(12,0.00185);
   h1_stack_2->SetBinContent(13,0.00285);
   h1_stack_2->SetBinContent(14,0.00365);
   h1_stack_2->SetBinContent(15,0.0041);
   h1_stack_2->SetBinContent(16,0.00375);
   h1_stack_2->SetBinContent(17,0.00625);
   h1_stack_2->SetBinContent(18,0.00835);
   h1_stack_2->SetBinContent(19,0.0099);
   h1_stack_2->SetBinContent(20,0.0137);
   h1_stack_2->SetBinContent(21,0.01545);
   h1_stack_2->SetBinContent(22,0.01985);
   h1_stack_2->SetBinContent(23,0.02375);
   h1_stack_2->SetBinContent(24,0.0287);
   h1_stack_2->SetBinContent(25,0.03405);
   h1_stack_2->SetBinContent(26,0.0345);
   h1_stack_2->SetBinContent(27,0.03765);
   h1_stack_2->SetBinContent(28,0.0396);
   h1_stack_2->SetBinContent(29,0.03875);
   h1_stack_2->SetBinContent(30,0.03895);
   h1_stack_2->SetBinContent(31,0.03755);
   h1_stack_2->SetBinContent(32,0.03575);
   h1_stack_2->SetBinContent(33,0.03255);
   h1_stack_2->SetBinContent(34,0.0303);
   h1_stack_2->SetBinContent(35,0.0294);
   h1_stack_2->SetBinContent(36,0.0278);
   h1_stack_2->SetBinContent(37,0.02885);
   h1_stack_2->SetBinContent(38,0.02525);
   h1_stack_2->SetBinContent(39,0.02165);
   h1_stack_2->SetBinContent(40,0.02195);
   h1_stack_2->SetBinContent(41,0.02135);
   h1_stack_2->SetBinContent(42,0.0183);
   h1_stack_2->SetBinContent(43,0.0165);
   h1_stack_2->SetBinContent(44,0.01685);
   h1_stack_2->SetBinContent(45,0.0168);
   h1_stack_2->SetBinContent(46,0.0162);
   h1_stack_2->SetBinContent(47,0.0132);
   h1_stack_2->SetBinContent(48,0.0139);
   h1_stack_2->SetBinContent(49,0.01135);
   h1_stack_2->SetBinContent(50,0.0115);
   h1_stack_2->SetBinContent(51,0.0113);
   h1_stack_2->SetBinContent(52,0.00895);
   h1_stack_2->SetBinContent(53,0.00955);
   h1_stack_2->SetBinContent(54,0.0085);
   h1_stack_2->SetBinContent(55,0.0083);
   h1_stack_2->SetBinContent(56,0.00805);
   h1_stack_2->SetBinContent(57,0.00725);
   h1_stack_2->SetBinContent(58,0.0067);
   h1_stack_2->SetBinContent(59,0.00725);
   h1_stack_2->SetBinContent(60,0.0062);
   h1_stack_2->SetBinContent(61,0.00575);
   h1_stack_2->SetBinContent(62,0.0066);
   h1_stack_2->SetBinContent(63,0.00535);
   h1_stack_2->SetBinContent(64,0.005);
   h1_stack_2->SetBinContent(65,0.00555);
   h1_stack_2->SetBinContent(66,0.00515);
   h1_stack_2->SetBinContent(67,0.00425);
   h1_stack_2->SetBinContent(68,0.00495);
   h1_stack_2->SetBinContent(69,0.0047);
   h1_stack_2->SetBinContent(70,0.00475);
   h1_stack_2->SetBinContent(71,0.0043);
   h1_stack_2->SetBinContent(72,0.0037);
   h1_stack_2->SetBinContent(73,0.0034);
   h1_stack_2->SetBinContent(74,0.00275);
   h1_stack_2->SetBinContent(75,0.0029);
   h1_stack_2->SetBinContent(76,0.00295);
   h1_stack_2->SetBinContent(77,0.0033);
   h1_stack_2->SetBinContent(78,0.0022);
   h1_stack_2->SetBinContent(79,0.0022);
   h1_stack_2->SetBinContent(80,0.0017);
   h1_stack_2->SetBinContent(81,0.00145);
   h1_stack_2->SetBinContent(82,0.0007);
   h1_stack_2->SetBinContent(83,0.00045);
   h1_stack_2->SetBinContent(84,5e-05);
   h1_stack_2->SetBinContent(85,5e-05);
   h1_stack_2->SetBinContent(86,0.0002);
   h1_stack_2->SetBinContent(87,0.0001);
   h1_stack_2->SetBinContent(89,5e-05);
   h1_stack_2->SetBinContent(90,0.0001);
   h1_stack_2->SetBinContent(91,0.0001);
   h1_stack_2->SetBinContent(92,5e-05);
   h1_stack_2->SetBinContent(93,5e-05);
   h1_stack_2->SetBinContent(94,0.0002);
   h1_stack_2->SetBinContent(95,5e-05);
   h1_stack_2->SetBinContent(96,0.0001);
   h1_stack_2->SetBinContent(97,5e-05);
   h1_stack_2->SetBinError(0,0.0007952987);
   h1_stack_2->SetBinError(1,5e-05);
   h1_stack_2->SetBinError(2,0.0001);
   h1_stack_2->SetBinError(3,0.0001118034);
   h1_stack_2->SetBinError(4,0.0001);
   h1_stack_2->SetBinError(5,0.0001224745);
   h1_stack_2->SetBinError(6,0.0001732051);
   h1_stack_2->SetBinError(7,0.0002179449);
   h1_stack_2->SetBinError(8,0.0001936492);
   h1_stack_2->SetBinError(9,0.0002291288);
   h1_stack_2->SetBinError(10,0.000244949);
   h1_stack_2->SetBinError(11,0.0003082207);
   h1_stack_2->SetBinError(12,0.0003041381);
   h1_stack_2->SetBinError(13,0.0003774917);
   h1_stack_2->SetBinError(14,0.0004272002);
   h1_stack_2->SetBinError(15,0.0004527693);
   h1_stack_2->SetBinError(16,0.0004330127);
   h1_stack_2->SetBinError(17,0.000559017);
   h1_stack_2->SetBinError(18,0.0006461424);
   h1_stack_2->SetBinError(19,0.0007035624);
   h1_stack_2->SetBinError(20,0.0008276473);
   h1_stack_2->SetBinError(21,0.0008789198);
   h1_stack_2->SetBinError(22,0.0009962429);
   h1_stack_2->SetBinError(23,0.001089725);
   h1_stack_2->SetBinError(24,0.001197915);
   h1_stack_2->SetBinError(25,0.001304799);
   h1_stack_2->SetBinError(26,0.001313393);
   h1_stack_2->SetBinError(27,0.001372042);
   h1_stack_2->SetBinError(28,0.001407125);
   h1_stack_2->SetBinError(29,0.001391941);
   h1_stack_2->SetBinError(30,0.001395529);
   h1_stack_2->SetBinError(31,0.001370219);
   h1_stack_2->SetBinError(32,0.001336974);
   h1_stack_2->SetBinError(33,0.001275735);
   h1_stack_2->SetBinError(34,0.001230853);
   h1_stack_2->SetBinError(35,0.001212436);
   h1_stack_2->SetBinError(36,0.001178983);
   h1_stack_2->SetBinError(37,0.001201041);
   h1_stack_2->SetBinError(38,0.00112361);
   h1_stack_2->SetBinError(39,0.001040433);
   h1_stack_2->SetBinError(40,0.001047616);
   h1_stack_2->SetBinError(41,0.001033199);
   h1_stack_2->SetBinError(42,0.0009565563);
   h1_stack_2->SetBinError(43,0.0009082951);
   h1_stack_2->SetBinError(44,0.000917878);
   h1_stack_2->SetBinError(45,0.0009165151);
   h1_stack_2->SetBinError(46,0.0009);
   h1_stack_2->SetBinError(47,0.0008124038);
   h1_stack_2->SetBinError(48,0.0008336666);
   h1_stack_2->SetBinError(49,0.000753326);
   h1_stack_2->SetBinError(50,0.0007582875);
   h1_stack_2->SetBinError(51,0.0007516648);
   h1_stack_2->SetBinError(52,0.0006689544);
   h1_stack_2->SetBinError(53,0.0006910137);
   h1_stack_2->SetBinError(54,0.0006519202);
   h1_stack_2->SetBinError(55,0.0006442049);
   h1_stack_2->SetBinError(56,0.0006344289);
   h1_stack_2->SetBinError(57,0.0006020797);
   h1_stack_2->SetBinError(58,0.0005787918);
   h1_stack_2->SetBinError(59,0.0006020797);
   h1_stack_2->SetBinError(60,0.0005567764);
   h1_stack_2->SetBinError(61,0.0005361903);
   h1_stack_2->SetBinError(62,0.0005744563);
   h1_stack_2->SetBinError(63,0.000517204);
   h1_stack_2->SetBinError(64,0.0005);
   h1_stack_2->SetBinError(65,0.0005267827);
   h1_stack_2->SetBinError(66,0.0005074446);
   h1_stack_2->SetBinError(67,0.0004609772);
   h1_stack_2->SetBinError(68,0.0004974937);
   h1_stack_2->SetBinError(69,0.000484768);
   h1_stack_2->SetBinError(70,0.0004873397);
   h1_stack_2->SetBinError(71,0.0004636809);
   h1_stack_2->SetBinError(72,0.0004301163);
   h1_stack_2->SetBinError(73,0.0004123106);
   h1_stack_2->SetBinError(74,0.0003708099);
   h1_stack_2->SetBinError(75,0.0003807887);
   h1_stack_2->SetBinError(76,0.0003840573);
   h1_stack_2->SetBinError(77,0.0004062019);
   h1_stack_2->SetBinError(78,0.0003316625);
   h1_stack_2->SetBinError(79,0.0003316625);
   h1_stack_2->SetBinError(80,0.0002915476);
   h1_stack_2->SetBinError(81,0.0002692582);
   h1_stack_2->SetBinError(82,0.0001870829);
   h1_stack_2->SetBinError(83,0.00015);
   h1_stack_2->SetBinError(84,5e-05);
   h1_stack_2->SetBinError(85,5e-05);
   h1_stack_2->SetBinError(86,0.0001);
   h1_stack_2->SetBinError(87,7.071068e-05);
   h1_stack_2->SetBinError(89,5e-05);
   h1_stack_2->SetBinError(90,7.071068e-05);
   h1_stack_2->SetBinError(91,7.071068e-05);
   h1_stack_2->SetBinError(92,5e-05);
   h1_stack_2->SetBinError(93,5e-05);
   h1_stack_2->SetBinError(94,0.0001);
   h1_stack_2->SetBinError(95,5e-05);
   h1_stack_2->SetBinError(96,7.071068e-05);
   h1_stack_2->SetBinError(97,5e-05);
   h1_stack_2->SetEntries(20000);
   h1_stack_2->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   h1_stack_2->SetLineColor(ci);
   h1_stack_2->SetLineWidth(3);
   h1_stack_2->SetMarkerStyle(20);
   h1_stack_2->SetMarkerSize(0.7);
   h1_stack_2->GetXaxis()->SetNdivisions(506);
   h1_stack_2->GetXaxis()->SetLabelFont(42);
   h1_stack_2->GetXaxis()->SetLabelOffset(0.015);
   h1_stack_2->GetXaxis()->SetLabelSize(0.06);
   h1_stack_2->GetXaxis()->SetTitleSize(0.07);
   h1_stack_2->GetXaxis()->SetTitleOffset(1);
   h1_stack_2->GetXaxis()->SetTitleFont(42);
   h1_stack_2->GetYaxis()->SetNdivisions(506);
   h1_stack_2->GetYaxis()->SetLabelFont(42);
   h1_stack_2->GetYaxis()->SetLabelOffset(0.015);
   h1_stack_2->GetYaxis()->SetLabelSize(0.06);
   h1_stack_2->GetYaxis()->SetTitleSize(0.07);
   h1_stack_2->GetYaxis()->SetTitleOffset(1.1);
   h1_stack_2->GetYaxis()->SetTitleFont(42);
   h1_stack_2->GetZaxis()->SetLabelFont(42);
   h1_stack_2->GetZaxis()->SetLabelOffset(0.015);
   h1_stack_2->GetZaxis()->SetLabelSize(0.06);
   h1_stack_2->GetZaxis()->SetTitleSize(0.07);
   h1_stack_2->GetZaxis()->SetTitleOffset(1.1);
   h1_stack_2->GetZaxis()->SetTitleFont(42);
   stk->Add(h1_stack_2,"");
   stk->Draw("nostackhist");
   TLatex *   tex = new TLatex(0.8,0.85,"#scale[2.0]{#bf{ILD}}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.55,0.5,0.9,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","#scale[1]{#color[1]{#bf{ZH #rightarrow q#bar{q} invisible}}}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#scale[1.00]{#color[1]{#bf{full reconstructed}}}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#scale[1.0]{(Pe^{-},Pe^{+})=(-1.0,+1.0)}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h0_stack_1","#bf{IDR-L}","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h1_stack_2","#bf{IDR-S}","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
