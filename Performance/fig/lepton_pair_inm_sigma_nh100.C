void lepton_pair_inm_sigma_nh100()
{
//=========Macro generated from canvas: c1/ 
//=========  (Tue Jul  2 11:14:24 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", " ",50,90,800,700);
   gStyle->SetOptStat(0);
   c1->Range(-0.2266667,-268.4311,1.106667,1222.853);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.25);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
      
   TH1F *_stack_1_stack_2 = new TH1F("_stack_1_stack_2","",100,0,1);
   _stack_1_stack_2->SetMinimum(0);
   _stack_1_stack_2->SetMaximum(1103.55);
   _stack_1_stack_2->SetDirectory(0);
   _stack_1_stack_2->SetStats(0);
   _stack_1_stack_2->SetLineWidth(2);
   _stack_1_stack_2->SetMarkerStyle(20);
   _stack_1_stack_2->SetMarkerSize(0.7);
   _stack_1_stack_2->GetXaxis()->SetTitle("#sigma(M_{#mu^{+}#mu^{-}}) [GeV]");
   _stack_1_stack_2->GetXaxis()->SetNdivisions(506);
   _stack_1_stack_2->GetXaxis()->SetLabelFont(42);
   _stack_1_stack_2->GetXaxis()->SetLabelOffset(0.015);
   _stack_1_stack_2->GetXaxis()->SetLabelSize(0.06);
   _stack_1_stack_2->GetXaxis()->SetTitleSize(0.07);
   _stack_1_stack_2->GetXaxis()->SetTitleOffset(1.2);
   _stack_1_stack_2->GetXaxis()->SetTitleFont(42);
   _stack_1_stack_2->GetYaxis()->SetTitle("Events/0.01GeV");
   _stack_1_stack_2->GetYaxis()->SetNdivisions(506);
   _stack_1_stack_2->GetYaxis()->SetLabelFont(42);
   _stack_1_stack_2->GetYaxis()->SetLabelOffset(0.015);
   _stack_1_stack_2->GetYaxis()->SetLabelSize(0.06);
   _stack_1_stack_2->GetYaxis()->SetTitleSize(0.07);
   _stack_1_stack_2->GetYaxis()->SetTitleOffset(1.6);
   _stack_1_stack_2->GetYaxis()->SetTitleFont(42);
   _stack_1_stack_2->GetZaxis()->SetLabelFont(42);
   _stack_1_stack_2->GetZaxis()->SetLabelOffset(0.015);
   _stack_1_stack_2->GetZaxis()->SetLabelSize(0.06);
   _stack_1_stack_2->GetZaxis()->SetTitleSize(0.07);
   _stack_1_stack_2->GetZaxis()->SetTitleOffset(1.1);
   _stack_1_stack_2->GetZaxis()->SetTitleFont(42);
   
   
   TH1F *pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1 = new TH1F("pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1","",100,0,1);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(0,3192);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(4,4);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(6,8);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(7,4);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(8,19);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(9,22);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(10,20);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(11,51);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(12,58);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(13,50);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(14,57);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(15,58);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(16,110);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(17,128);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(18,141);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(19,213);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(20,249);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(21,297);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(22,264);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(23,324);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(24,398);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(25,454);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(26,497);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(27,441);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(28,522);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(29,568);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(30,587);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(31,638);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(32,753);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(33,807);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(34,829);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(35,984);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(36,1000);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(37,1051);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(38,928);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(39,808);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(40,673);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(41,468);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(42,390);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(43,433);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(44,357);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(45,376);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(46,333);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(47,319);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(48,333);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(49,238);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(50,238);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(51,275);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(52,208);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(53,163);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(54,168);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(55,152);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(56,110);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(57,77);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(58,110);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(59,98);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(60,93);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(61,72);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(62,68);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(63,53);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(64,54);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(65,78);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(66,56);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(67,57);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(68,42);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(69,53);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(70,57);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(71,39);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(72,38);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(73,37);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(74,29);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(75,21);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(76,32);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(77,26);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(78,24);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(79,32);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(80,22);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(81,21);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(82,14);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(83,13);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(84,20);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(85,20);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(86,19);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(87,8);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(88,30);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(89,19);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(90,18);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(91,10);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(92,16);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(93,7);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(94,8);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(95,24);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(96,5);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(97,4);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(98,8);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(99,11);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(100,10);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetBinContent(101,684);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetEntries(24005);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetStats(0);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetLineColor(4);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetLineWidth(2);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetMarkerStyle(20);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->SetMarkerSize(0.7);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetNdivisions(506);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetLabelOffset(0.015);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetLabelSize(0.06);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetTitleSize(0.07);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetNdivisions(506);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetLabelOffset(0.015);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetLabelSize(0.06);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetTitleSize(0.07);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetTitleOffset(1.1);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetZaxis()->SetLabelOffset(0.015);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetZaxis()->SetLabelSize(0.06);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetZaxis()->SetTitleSize(0.07);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetZaxis()->SetTitleOffset(1.1);
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   
   TH1F *pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2 = new TH1F("pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2","",100,0,1);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(0,2853);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(5,4);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(6,2);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(7,6);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(8,6);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(9,4);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(10,18);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(11,36);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(12,26);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(13,42);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(14,50);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(15,44);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(16,45);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(17,61);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(18,68);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(19,78);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(20,98);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(21,149);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(22,151);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(23,274);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(24,220);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(25,264);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(26,308);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(27,287);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(28,317);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(29,350);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(30,339);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(31,396);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(32,330);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(33,428);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(34,431);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(35,452);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(36,435);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(37,524);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(38,569);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(39,589);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(40,546);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(41,658);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(42,794);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(43,799);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(44,853);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(45,960);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(46,892);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(47,968);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(48,795);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(49,698);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(50,538);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(51,348);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(52,265);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(53,276);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(54,265);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(55,273);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(56,259);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(57,208);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(58,217);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(59,257);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(60,226);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(61,124);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(62,191);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(63,177);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(64,168);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(65,162);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(66,177);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(67,103);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(68,112);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(69,80);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(70,71);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(71,72);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(72,45);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(73,46);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(74,34);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(75,30);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(76,28);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(77,30);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(78,19);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(79,23);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(80,11);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(81,26);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(82,26);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(83,8);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(84,17);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(85,20);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(86,12);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(87,4);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(88,21);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(89,10);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(90,6);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(91,17);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(92,9);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(93,17);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(94,17);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(95,10);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(96,15);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(97,13);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(98,6);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(99,10);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(100,2);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetBinContent(101,566);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetEntries(23884);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetStats(0);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetLineColor(2);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetLineStyle(2);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetLineWidth(2);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetMarkerStyle(20);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->SetMarkerSize(0.7);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetNdivisions(506);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetLabelOffset(0.015);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetLabelSize(0.06);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetTitleSize(0.07);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetNdivisions(506);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetLabelOffset(0.015);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetLabelSize(0.06);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetTitleSize(0.07);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetTitleOffset(1.1);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetZaxis()->SetLabelOffset(0.015);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetZaxis()->SetLabelSize(0.06);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetZaxis()->SetTitleSize(0.07);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetZaxis()->SetTitleOffset(1.1);
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   _stack_1_stack_2->Draw();
   pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1->Draw("same");
   pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2->Draw("same");
   
   TLegend *leg = new TLegend(0.645,0.60,0.91,0.77,NULL,"brNDC");
   leg->SetHeader("#splitline{Z #rightarrow #mu^{+}#mu^{-} in e^{+}e^{-} #rightarrow ZS^{0}}{with M_{S^{0}} = 100 GeV}");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("pfo_input_lepton_obv_sigma_inm0_stack_1_stack_1","IDR-L","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pfo_input_lepton_obv_sigma_inm1_stack_2_stack_2","IDR-S","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4629125,895.3898,0.9543621,1004.783,"nb");
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("ILD");
   pt_LaTex->SetTextColor(1);
   pt_LaTex->SetTextFont(62);
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
