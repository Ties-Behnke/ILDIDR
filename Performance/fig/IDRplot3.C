void IDRplot3()
{
//=========Macro generated from canvas: c3/Dynamic Filling Example
//=========  (Thu Jan  9 11:22:56 2020) by ROOT version 6.16/00
   TCanvas *c3 = new TCanvas("c3", "Dynamic Filling Example",300,52,800,800);
   gStyle->SetOptStat(0);
   c3->Range(0,0,1,1);
   c3->SetFillColor(10);
   c3->SetBorderMode(0);
   c3->SetBorderSize(2);
   c3->SetTickx(1);
   c3->SetTicky(1);
   c3->SetLeftMargin(0.17);
   c3->SetRightMargin(0.08);
   c3->SetTopMargin(0.08);
   c3->SetBottomMargin(0.18);
   c3->SetFrameLineWidth(2);
   c3->SetFrameBorderMode(0);
   c3->SetFrameLineWidth(2);
   c3->SetFrameBorderMode(-1);
  
// ------------>Primitives in pad: c3_1
   TPad *c3_1 = new TPad("c3_1", "c3_1",0.01,0.01,0.99,0.99);
   c3_1->Draw();
   c3_1->cd();
   c3_1->Range(-2.266667,-0.886782,11.06667,4.039785);
   c3_1->SetFillColor(10);
   c3_1->SetBorderMode(0);
   c3_1->SetBorderSize(2);
   c3_1->SetTickx(1);
   c3_1->SetTicky(1);
   c3_1->SetLeftMargin(0.17);
   c3_1->SetRightMargin(0.08);
   c3_1->SetTopMargin(0.08);
   c3_1->SetBottomMargin(0.18);
   c3_1->SetFrameLineWidth(2);
   c3_1->SetFrameBorderMode(0);
   c3_1->SetFrameLineWidth(2);
   c3_1->SetFrameBorderMode(0);
   
   TH1F *hs31__15 = new TH1F("hs31__15","",10,0,10);
   hs31__15->SetBinContent(2,0.355519);
   hs31__15->SetBinContent(5,3.472056);
   hs31__15->SetBinContent(8,1.50151);
   hs31__15->SetBarOffset(0.15);
   hs31__15->SetBarWidth(0.7);
   hs31__15->SetEntries(3);
   hs31__15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0033ff");
   hs31__15->SetFillColor(ci);
   hs31__15->SetLineColor(0);
   hs31__15->SetLineWidth(2);
   hs31__15->SetMarkerStyle(20);
   hs31__15->SetMarkerSize(0.7);
   hs31__15->GetXaxis()->SetTitle("decay mode");
   hs31__15->GetXaxis()->SetBinLabel(2,"H#rightarrowb#barb");
   hs31__15->GetXaxis()->SetBinLabel(5,"H#rightarrowc#barc");
   hs31__15->GetXaxis()->SetBinLabel(8,"H#rightarrowgg");
   hs31__15->GetXaxis()->SetNdivisions(506);
   hs31__15->GetXaxis()->SetLabelFont(42);
   hs31__15->GetXaxis()->SetLabelOffset(0.015);
   hs31__15->GetXaxis()->SetLabelSize(0.06);
   hs31__15->GetXaxis()->SetTitleSize(0.07);
   hs31__15->GetXaxis()->SetTitleOffset(1.2);
   hs31__15->GetXaxis()->SetTitleFont(42);
   hs31__15->GetYaxis()->SetTitle("#Delta(#sigmaBR)/#sigmaBR (%)");
   hs31__15->GetYaxis()->SetNdivisions(506);
   hs31__15->GetYaxis()->SetLabelFont(42);
   hs31__15->GetYaxis()->SetLabelOffset(0.015);
   hs31__15->GetYaxis()->SetLabelSize(0.06);
   hs31__15->GetYaxis()->SetTitleSize(0.07);
   hs31__15->GetYaxis()->SetTitleOffset(1.1);
   hs31__15->GetYaxis()->SetTitleFont(42);
   hs31__15->GetZaxis()->SetLabelFont(42);
   hs31__15->GetZaxis()->SetLabelOffset(0.015);
   hs31__15->GetZaxis()->SetLabelSize(0.06);
   hs31__15->GetZaxis()->SetTitleSize(0.07);
   hs31__15->GetZaxis()->SetTitleOffset(1.1);
   hs31__15->GetZaxis()->SetTitleFont(42);
   hs31__15->Draw("bar0");
   
   TH1F *hs32__16 = new TH1F("hs32__16","",10,0,10);
   hs32__16->SetBinContent(3,0.3595464);
   hs32__16->SetBinContent(6,3.344412);
   hs32__16->SetBinContent(9,1.543917);
   hs32__16->SetBarOffset(0.15);
   hs32__16->SetBarWidth(0.7);
   hs32__16->SetEntries(3);
   hs32__16->SetStats(0);

   ci = TColor::GetColor("#ff0033");
   hs32__16->SetFillColor(ci);
   hs32__16->SetLineColor(0);
   hs32__16->SetLineWidth(2);
   hs32__16->SetMarkerStyle(20);
   hs32__16->SetMarkerSize(0.7);
   hs32__16->GetXaxis()->SetTitle("decay mode");
   hs32__16->GetXaxis()->SetBinLabel(2,"H#rightarrowb#barb");
   hs32__16->GetXaxis()->SetBinLabel(5,"H#rightarrowc#barc");
   hs32__16->GetXaxis()->SetBinLabel(8,"H#rightarrowgg");
   hs32__16->GetXaxis()->SetNdivisions(506);
   hs32__16->GetXaxis()->SetLabelFont(42);
   hs32__16->GetXaxis()->SetLabelOffset(0.015);
   hs32__16->GetXaxis()->SetLabelSize(0.06);
   hs32__16->GetXaxis()->SetTitleSize(0.07);
   hs32__16->GetXaxis()->SetTitleOffset(1.2);
   hs32__16->GetXaxis()->SetTitleFont(42);
   hs32__16->GetYaxis()->SetTitle("#Delta(#sigmaBR)/#sigmaBR (%)");
   hs32__16->GetYaxis()->SetNdivisions(506);
   hs32__16->GetYaxis()->SetLabelFont(42);
   hs32__16->GetYaxis()->SetLabelOffset(0.015);
   hs32__16->GetYaxis()->SetLabelSize(0.06);
   hs32__16->GetYaxis()->SetTitleSize(0.07);
   hs32__16->GetYaxis()->SetTitleOffset(1.1);
   hs32__16->GetYaxis()->SetTitleFont(42);
   hs32__16->GetZaxis()->SetLabelFont(42);
   hs32__16->GetZaxis()->SetLabelOffset(0.015);
   hs32__16->GetZaxis()->SetLabelSize(0.06);
   hs32__16->GetZaxis()->SetTitleSize(0.07);
   hs32__16->GetZaxis()->SetTitleOffset(1.1);
   hs32__16->GetZaxis()->SetTitleFont(42);
   hs32__16->Draw("bar0same");
   
   TPaveLabel *pl = new TPaveLabel(0.7,0.8,0.9,0.9,"ILD","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillColor(0);
   pl->SetLineWidth(2);
   pl->SetTextSize(1.1);
   pl->Draw();
   
   TPaveText *pt = new TPaveText(0.16,0.928,0.55,1.008,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Higgs Branching Ratio Analysis");
   //pt->Draw();
   
   TLegend *leg = new TLegend(0.2,0.72,0.45,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hs31","e^{+}e^{-}#rightarrow#nu#nuH","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hs31","IDR-L, Combined","F");

   ci = TColor::GetColor("#0033ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hs32","IDR-S, Combined","F");

   ci = TColor::GetColor("#ff0033");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   c3_1->Modified();
   c3->cd();
   c3->Modified();
   c3->cd();
   c3->SetSelected(c3);
}
