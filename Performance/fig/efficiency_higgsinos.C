void efficiency_higgsinos()
{
//=========Macro generated from canvas: c/efficiency
//=========  (Wed Jul  3 18:51:05 2019) by ROOT version6.08/06
   TCanvas *c = new TCanvas("c", "efficiency",1625,243,700,600);
   gStyle->SetOptStat(0);
   c->Range(-0.4968345,-0.2510463,2.421216,1.234527);
   c->SetFillColor(10);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.1733467);
   c->SetRightMargin(0.0761523);
   c->SetBottomMargin(0.1689896);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   
   Double_t _fx3001[7] = {
   0.055,
   0.15,
   0.25,
   0.4,
   0.6,
   0.85,
   1.5};
   Double_t _fy3001[7] = {
   0.003174603,
   0.2041237,
   0.6233766,
   0.9970421,
   0.9997472,
   0.9998596,
   1};
   Double_t _felx3001[7] = {
   0.045,
   0.05,
   0.05,
   0.1,
   0.1,
   0.15,
   0.5};
   Double_t _fely3001[7] = {
   0.002626329,
   0.008264869,
   0.00726323,
   0.0005445782,
   0.000245867,
   0.0001851348,
   9.943986e-05};
   Double_t _fehx3001[7] = {
   0.045,
   0.05,
   0.05,
   0.1,
   0.1,
   0.15,
   0.5};
   Double_t _fehy3001[7] = {
   0.007261923,
   0.008514977,
   0.007209017,
   0.0004652364,
   0.0001375921,
   9.06786e-05,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetLineColor(2);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0.00,1);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1.099945);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->SetMarkerSize(0.7);
   Graph_Graph3001->GetXaxis()->SetTitle("p_{t} / GeV");
   Graph_Graph3001->GetXaxis()->SetNdivisions(506);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("Tracking efficiency");
   Graph_Graph3001->GetYaxis()->SetNdivisions(506);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetNdivisions(505);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("ap");
   
   Double_t _fx3002[7] = {
   0.055,
   0.15,
   0.25,
   0.4,
   0.6,
   0.85,
   1.5};
   Double_t _fy3002[7] = {
   0.006864989,
   0.2786651,
   0.8098042,
   0.997669,
   0.9999407,
   1,
   0.9999614};
   Double_t _felx3002[7] = {
   0.045,
   0.05,
   0.05,
   0.1,
   0.1,
   0.15,
   0.5};
   Double_t _fely3002[7] = {
   0.003733895,
   0.007649241,
   0.004881371,
   0.0004013105,
   0.0001363519,
   0.0001001104,
   8.866277e-05};
   Double_t _fehx3002[7] = {
   0.045,
   0.05,
   0.05,
   0.1,
   0.1,
   0.15,
   0.5};
   Double_t _fehy3002[7] = {
   0.006632594,
   0.007777857,
   0.004788756,
   0.0003458967,
   4.905694e-05,
   0,
   3.189816e-05};
   TGraphAsymmErrors *graf = new TGraphAsymmErrors(6,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   graf->SetName("");
   graf->SetTitle("");
   graf->SetLineColor(4);
   graf->SetLineWidth(2);
   graf->SetMarkerColor(4);
   graf->SetMarkerStyle(25);
   graf->SetMarkerSize(0.7);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0.00,1);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(1.099687);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->SetMarkerSize(0.7);
   Graph_Graph3002->GetXaxis()->SetTitle("p_{t} [GeV]");
   Graph_Graph3002->GetXaxis()->SetNdivisions(506);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetTitle("Tracking efficiency");
   Graph_Graph3002->GetYaxis()->SetNdivisions(506);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetNdivisions(505);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   graf->SetHistogram(Graph_Graph3002);
   
   graf->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4,0.55,0.6,0.70,"NB");
   pt->SetFillColor(0);
   pt->SetTextFont(62);
   pt->SetLineWidth(2);
   TText *AText = pt->AddText("ILD");
   pt->Draw();
   
//    pt = new TPaveText(0.625,0.52,0.95,0.80,"NB");
//    pt->SetFillColor(0);
//    pt->SetLineWidth(2);
//    pt->SetTextFont(42);
//    AText = pt->AddText("preliminary");
//    pt->Draw();
   
   TLegend *leg = new TLegend(0.4539078,0.2421603,0.8537074,0.5418118,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#splitline{e^{+}e^{-}#rightarrow#tilde{#chi}^{+}#tilde{#chi}^{-}#gamma}{with #DeltaM=770 MeV}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(62);
//   entry=leg->AddEntry(grae,"IDR-L #rightarrow 61.44%","e0p");
   entry=leg->AddEntry(graf,"IDR-L ","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(62);
//   entry=leg->AddEntry(graf,"IDR-S #rightarrow 58.6%","e0p");
   entry=leg->AddEntry(grae,"IDR-S","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(62);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
