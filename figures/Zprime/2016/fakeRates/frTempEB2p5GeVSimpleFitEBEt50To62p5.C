void frTempEB2p5GeVSimpleFitEBEt50To62.5()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Dec 12 17:11:00 2016) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",963,60,900,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.13);
   c1->SetRightMargin(0.07);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: spectrumPad
   TPad *spectrumPad = new TPad("spectrumPad", "newpad",0.01,0.3,0.99,0.99);
   spectrumPad->Draw();
   spectrumPad->cd();
   spectrumPad->Range(-8.125,2.075969,54.375,8.00931);
   spectrumPad->SetFillColor(0);
   spectrumPad->SetBorderMode(0);
   spectrumPad->SetBorderSize(2);
   spectrumPad->SetLogy();
   spectrumPad->SetTickx(1);
   spectrumPad->SetTicky(1);
   spectrumPad->SetLeftMargin(0.13);
   spectrumPad->SetRightMargin(0.07);
   spectrumPad->SetFrameBorderMode(0);
   spectrumPad->SetFrameBorderMode(0);
   
   TH1D *sigPlusJetDist4
16 = new TH1D("sigPlusJetDist4
16","",20,0,50);
   sigPlusJetDist4
16->SetBinContent(1,1.560828e+07);
   sigPlusJetDist4
16->SetBinContent(2,1724280);
   sigPlusJetDist4
16->SetBinContent(3,1249560);
   sigPlusJetDist4
16->SetBinContent(4,847100);
   sigPlusJetDist4
16->SetBinContent(5,529860);
   sigPlusJetDist4
16->SetBinContent(6,397620);
   sigPlusJetDist4
16->SetBinContent(7,256120);
   sigPlusJetDist4
16->SetBinContent(8,136400);
   sigPlusJetDist4
16->SetBinContent(9,79080);
   sigPlusJetDist4
16->SetBinContent(10,47680);
   sigPlusJetDist4
16->SetBinContent(11,35820);
   sigPlusJetDist4
16->SetBinContent(12,18320);
   sigPlusJetDist4
16->SetBinContent(13,13900);
   sigPlusJetDist4
16->SetBinContent(14,13980);
   sigPlusJetDist4
16->SetBinContent(15,7900);
   sigPlusJetDist4
16->SetBinContent(16,1000);
   sigPlusJetDist4
16->SetBinContent(17,1400);
   sigPlusJetDist4
16->SetBinContent(21,3500);
   sigPlusJetDist4
16->SetBinError(1,159130.7);
   sigPlusJetDist4
16->SetBinError(2,53264.19);
   sigPlusJetDist4
16->SetBinError(3,44498.71);
   sigPlusJetDist4
16->SetBinError(4,37330.21);
   sigPlusJetDist4
16->SetBinError(5,28838.19);
   sigPlusJetDist4
16->SetBinError(6,25746.2);
   sigPlusJetDist4
16->SetBinError(7,20211.82);
   sigPlusJetDist4
16->SetBinError(8,14481.71);
   sigPlusJetDist4
16->SetBinError(9,11689.96);
   sigPlusJetDist4
16->SetBinError(10,8883.423);
   sigPlusJetDist4
16->SetBinError(11,7644.318);
   sigPlusJetDist4
16->SetBinError(12,5298.981);
   sigPlusJetDist4
16->SetBinError(13,5076.416);
   sigPlusJetDist4
16->SetBinError(14,5168.946);
   sigPlusJetDist4
16->SetBinError(15,4129.165);
   sigPlusJetDist4
16->SetBinError(16,1000);
   sigPlusJetDist4
16->SetBinError(17,1400);
   sigPlusJetDist4
16->SetBinError(21,2500);
   sigPlusJetDist4
16->SetEntries(15341);
   sigPlusJetDist4
16->SetDirectory(0);
   sigPlusJetDist4
16->SetLineColor(4);
   sigPlusJetDist4
16->SetMarkerColor(4);
   sigPlusJetDist4
16->SetMarkerStyle(8);
   sigPlusJetDist4
16->GetXaxis()->SetLabelFont(42);
   sigPlusJetDist4
16->GetXaxis()->SetLabelSize(0.047);
   sigPlusJetDist4
16->GetXaxis()->SetTitleSize(0.05);
   sigPlusJetDist4
16->GetXaxis()->SetTitleOffset(0.9);
   sigPlusJetDist4
16->GetXaxis()->SetTitleFont(42);
   sigPlusJetDist4
16->GetYaxis()->SetTitle("# Weighted Events / bin");
   sigPlusJetDist4
16->GetYaxis()->SetLabelFont(42);
   sigPlusJetDist4
16->GetYaxis()->SetLabelSize(0.047);
   sigPlusJetDist4
16->GetYaxis()->SetTitleSize(0.055);
   sigPlusJetDist4
16->GetYaxis()->SetTitleOffset(1.2);
   sigPlusJetDist4
16->GetYaxis()->SetTitleFont(42);
   sigPlusJetDist4
16->GetZaxis()->SetLabelFont(42);
   sigPlusJetDist4
16->GetZaxis()->SetLabelSize(0.047);
   sigPlusJetDist4
16->GetZaxis()->SetTitleFont(42);
   sigPlusJetDist4
16->Draw("EP");
   
   TH1D *totHist17 = new TH1D("totHist17","temp",20,0,50);
   totHist17->SetBinContent(1,1.564752e+07);
   totHist17->SetBinContent(2,1610021);
   totHist17->SetBinContent(3,1216992);
   totHist17->SetBinContent(4,851955.5);
   totHist17->SetBinContent(5,593727.4);
   totHist17->SetBinContent(6,385351.9);
   totHist17->SetBinContent(7,246332.6);
   totHist17->SetBinContent(8,165888.8);
   totHist17->SetBinContent(9,97963.01);
   totHist17->SetBinContent(10,60232.84);
   totHist17->SetBinContent(11,40660.98);
   totHist17->SetBinContent(12,29646.26);
   totHist17->SetBinContent(13,14885.65);
   totHist17->SetBinContent(14,12542.44);
   totHist17->SetBinContent(15,8676.953);
   totHist17->SetBinContent(16,6812.169);
   totHist17->SetBinContent(17,4349.35);
   totHist17->SetBinContent(18,7339.528);
   totHist17->SetBinContent(19,2696.597);
   totHist17->SetBinContent(20,3588.214);
   totHist17->SetBinContent(21,10074.18);
   totHist17->SetBinError(1,45566.34);
   totHist17->SetBinError(2,25459.57);
   totHist17->SetBinError(3,22970.62);
   totHist17->SetBinError(4,19522.2);
   totHist17->SetBinError(5,16175.97);
   totHist17->SetBinError(6,13148.41);
   totHist17->SetBinError(7,10481.79);
   totHist17->SetBinError(8,8671.66);
   totHist17->SetBinError(9,6546.706);
   totHist17->SetBinError(10,5180.259);
   totHist17->SetBinError(11,4261.465);
   totHist17->SetBinError(12,3604.089);
   totHist17->SetBinError(13,2576.221);
   totHist17->SetBinError(14,2453.26);
   totHist17->SetBinError(15,2012.632);
   totHist17->SetBinError(16,1658.404);
   totHist17->SetBinError(17,1394.232);
   totHist17->SetBinError(18,1833.349);
   totHist17->SetBinError(19,1102.133);
   totHist17->SetBinError(20,1200.388);
   totHist17->SetBinError(21,2377.362);
   totHist17->SetEntries(222571);
   totHist17->SetLineStyle(2);
   totHist17->SetLineWidth(3);
   totHist17->GetXaxis()->SetLabelFont(42);
   totHist17->GetXaxis()->SetLabelSize(0.047);
   totHist17->GetXaxis()->SetTitleSize(0.05);
   totHist17->GetXaxis()->SetTitleOffset(0.9);
   totHist17->GetXaxis()->SetTitleFont(42);
   totHist17->GetYaxis()->SetLabelFont(42);
   totHist17->GetYaxis()->SetLabelSize(0.047);
   totHist17->GetYaxis()->SetTitleSize(0.055);
   totHist17->GetYaxis()->SetTitleOffset(1.2);
   totHist17->GetYaxis()->SetTitleFont(42);
   totHist17->GetZaxis()->SetLabelFont(42);
   totHist17->GetZaxis()->SetLabelSize(0.047);
   totHist17->GetZaxis()->SetTitleFont(42);
   totHist17->Draw("SAMEHISTE");
   
   TH1D *var1Hist18 = new TH1D("var1Hist18","temp",20,0,50);
   var1Hist18->SetBinContent(1,1.289877e+07);
   var1Hist18->SetBinContent(2,183161.9);
   var1Hist18->SetBinContent(3,33485.41);
   var1Hist18->SetBinContent(4,8192.547);
   var1Hist18->SetBinContent(5,3901.213);
   var1Hist18->SetBinContent(6,1755.546);
   var1Hist18->SetBinContent(7,1105.344);
   var1Hist18->SetBinContent(8,260.0809);
   var1Hist18->SetBinContent(9,195.0606);
   var1Hist18->SetBinContent(10,65.02021);
   var1Hist18->SetBinError(1,28959.99);
   var1Hist18->SetBinError(2,3450.975);
   var1Hist18->SetBinError(3,1475.543);
   var1Hist18->SetBinError(4,729.8501);
   var1Hist18->SetBinError(5,503.6444);
   var1Hist18->SetBinError(6,337.8549);
   var1Hist18->SetBinError(7,268.0852);
   var1Hist18->SetBinError(8,130.0404);
   var1Hist18->SetBinError(9,112.6183);
   var1Hist18->SetBinError(10,65.02021);
   var1Hist18->SetEntries(201951);
   var1Hist18->SetDirectory(0);
   var1Hist18->SetLineColor(4);
   var1Hist18->SetLineStyle(2);
   var1Hist18->SetLineWidth(2);
   var1Hist18->GetXaxis()->SetLabelFont(42);
   var1Hist18->GetXaxis()->SetLabelSize(0.047);
   var1Hist18->GetXaxis()->SetTitleSize(0.05);
   var1Hist18->GetXaxis()->SetTitleOffset(0.9);
   var1Hist18->GetXaxis()->SetTitleFont(42);
   var1Hist18->GetYaxis()->SetLabelFont(42);
   var1Hist18->GetYaxis()->SetLabelSize(0.047);
   var1Hist18->GetYaxis()->SetTitleSize(0.055);
   var1Hist18->GetYaxis()->SetTitleOffset(1.2);
   var1Hist18->GetYaxis()->SetTitleFont(42);
   var1Hist18->GetZaxis()->SetLabelFont(42);
   var1Hist18->GetZaxis()->SetLabelSize(0.047);
   var1Hist18->GetZaxis()->SetTitleFont(42);
   var1Hist18->Draw("SAMEHISTE");
   
   TH1D *jetTemplates4
19 = new TH1D("jetTemplates4
19","hist",20,0,50);
   jetTemplates4
19->SetBinContent(1,2748740);
   jetTemplates4
19->SetBinContent(2,1426859);
   jetTemplates4
19->SetBinContent(3,1183507);
   jetTemplates4
19->SetBinContent(4,843763);
   jetTemplates4
19->SetBinContent(5,589826.2);
   jetTemplates4
19->SetBinContent(6,383596.3);
   jetTemplates4
19->SetBinContent(7,245227.2);
   jetTemplates4
19->SetBinContent(8,165628.7);
   jetTemplates4
19->SetBinContent(9,97767.95);
   jetTemplates4
19->SetBinContent(10,60167.82);
   jetTemplates4
19->SetBinContent(11,40660.98);
   jetTemplates4
19->SetBinContent(12,29646.26);
   jetTemplates4
19->SetBinContent(13,14885.65);
   jetTemplates4
19->SetBinContent(14,12542.44);
   jetTemplates4
19->SetBinContent(15,8676.953);
   jetTemplates4
19->SetBinContent(16,6812.169);
   jetTemplates4
19->SetBinContent(17,4349.35);
   jetTemplates4
19->SetBinContent(18,7339.528);
   jetTemplates4
19->SetBinContent(19,2696.597);
   jetTemplates4
19->SetBinContent(20,3588.214);
   jetTemplates4
19->SetBinContent(21,10074.18);
   jetTemplates4
19->SetBinError(1,35179.69);
   jetTemplates4
19->SetBinError(2,25224.6);
   jetTemplates4
19->SetBinError(3,22923.18);
   jetTemplates4
19->SetBinError(4,19508.56);
   jetTemplates4
19->SetBinError(5,16168.13);
   jetTemplates4
19->SetBinError(6,13144.07);
   jetTemplates4
19->SetBinError(7,10478.37);
   jetTemplates4
19->SetBinError(8,8670.685);
   jetTemplates4
19->SetBinError(9,6545.738);
   jetTemplates4
19->SetBinError(10,5179.851);
   jetTemplates4
19->SetBinError(11,4261.465);
   jetTemplates4
19->SetBinError(12,3604.089);
   jetTemplates4
19->SetBinError(13,2576.221);
   jetTemplates4
19->SetBinError(14,2453.26);
   jetTemplates4
19->SetBinError(15,2012.632);
   jetTemplates4
19->SetBinError(16,1658.404);
   jetTemplates4
19->SetBinError(17,1394.232);
   jetTemplates4
19->SetBinError(18,1833.349);
   jetTemplates4
19->SetBinError(19,1102.133);
   jetTemplates4
19->SetBinError(20,1200.388);
   jetTemplates4
19->SetBinError(21,2377.362);
   jetTemplates4
19->SetEntries(20620);
   jetTemplates4
19->SetDirectory(0);
   jetTemplates4
19->SetLineColor(2);
   jetTemplates4
19->SetLineStyle(2);
   jetTemplates4
19->SetLineWidth(2);
   jetTemplates4
19->GetXaxis()->SetLabelFont(42);
   jetTemplates4
19->GetXaxis()->SetLabelSize(0.047);
   jetTemplates4
19->GetXaxis()->SetTitleSize(0.05);
   jetTemplates4
19->GetXaxis()->SetTitleOffset(0.9);
   jetTemplates4
19->GetXaxis()->SetTitleFont(42);
   jetTemplates4
19->GetYaxis()->SetLabelFont(42);
   jetTemplates4
19->GetYaxis()->SetLabelSize(0.047);
   jetTemplates4
19->GetYaxis()->SetTitleSize(0.055);
   jetTemplates4
19->GetYaxis()->SetTitleOffset(1.2);
   jetTemplates4
19->GetYaxis()->SetTitleFont(42);
   jetTemplates4
19->GetZaxis()->SetLabelFont(42);
   jetTemplates4
19->GetZaxis()->SetLabelSize(0.047);
   jetTemplates4
19->GetZaxis()->SetTitleFont(42);
   jetTemplates4
19->Draw("SAMEHISTE");
   
   TLegend *leg = new TLegend(0.593386,0.627083,0.892903,0.869967,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("sigPlusJetDist4
","data","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("totHist","ele+jet templates","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("var1Hist","ele template","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("jetTemplates4
","jet template","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveLabel *pl = new TPaveLabel(0.636662,0.5,0.880375,0.617,"50 < E_{T} < 62.5 GeV","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.438598);
   pl->Draw();
   
   pl = new TPaveLabel(0.636662,0.424,0.880375,0.541,"barrel ","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.438598);
   pl->Draw();
   spectrumPad->Modified();
   c1->cd();
  
// ------------>Primitives in pad: ratioPad
   TPad *ratioPad = new TPad("ratioPad", "newpad",0.01,0.01,0.99,0.33);
   ratioPad->Draw();
   ratioPad->cd();
   ratioPad->Range(-8.125,-0.923077,54.375,2.153846);
   ratioPad->SetFillColor(0);
   ratioPad->SetFillStyle(4000);
   ratioPad->SetBorderMode(0);
   ratioPad->SetBorderSize(2);
   ratioPad->SetGridy();
   ratioPad->SetTickx(1);
   ratioPad->SetTicky(1);
   ratioPad->SetLeftMargin(0.13);
   ratioPad->SetRightMargin(0.07);
   ratioPad->SetTopMargin(0.05);
   ratioPad->SetBottomMargin(0.3);
   ratioPad->SetFrameBorderMode(0);
   ratioPad->SetFrameBorderMode(0);
   
   TH1D *ratioHist20 = new TH1D("ratioHist20","",20,0,50);
   ratioHist20->SetBinContent(1,0.9974926);
   ratioHist20->SetBinContent(2,1.070968);
   ratioHist20->SetBinContent(3,1.026761);
   ratioHist20->SetBinContent(4,0.9943007);
   ratioHist20->SetBinContent(5,0.8924297);
   ratioHist20->SetBinContent(6,1.031836);
   ratioHist20->SetBinContent(7,1.039733);
   ratioHist20->SetBinContent(8,0.8222377);
   ratioHist20->SetBinContent(9,0.8072435);
   ratioHist20->SetBinContent(10,0.7915948);
   ratioHist20->SetBinContent(11,0.8809428);
   ratioHist20->SetBinContent(12,0.6179532);
   ratioHist20->SetBinContent(13,0.9337852);
   ratioHist20->SetBinContent(14,1.114616);
   ratioHist20->SetBinContent(15,0.9104579);
   ratioHist20->SetBinContent(16,0.1467961);
   ratioHist20->SetBinContent(17,0.3218872);
   ratioHist20->SetBinContent(21,0.3474228);
   ratioHist20->SetBinError(1,0.01057641);
   ratioHist20->SetBinError(2,0.03716569);
   ratioHist20->SetBinError(3,0.04138293);
   ratioHist20->SetBinError(4,0.04938671);
   ratioHist20->SetBinError(5,0.05431719);
   ratioHist20->SetBinError(6,0.07552076);
   ratioHist20->SetBinError(7,0.09321866);
   ratioHist20->SetBinError(8,0.09730526);
   ratioHist20->SetBinError(9,0.130958);
   ratioHist20->SetBinError(10,0.1624397);
   ratioHist20->SetBinError(11,0.2094487);
   ratioHist20->SetBinError(12,0.193886);
   ratioHist20->SetBinError(13,0.3773816);
   ratioHist20->SetBinError(14,0.4662303);
   ratioHist20->SetBinError(15,0.5206314);
   ratioHist20->SetBinError(16,0.1510836);
   ratioHist20->SetBinError(17,0.3380213);
   ratioHist20->SetBinError(21,0.2613518);
   ratioHist20->SetMinimum(0);
   ratioHist20->SetMaximum(2);
   ratioHist20->SetEntries(224.1124);
   
   TF1 *pol07 = new TF1("pol0","pol0",0,25);
   pol07->SetFillColor(19);
   pol07->SetFillStyle(0);
   pol07->SetLineWidth(3);
   pol07->SetChisquare(15.52315);
   pol07->SetNDF(9);
   pol07->GetXaxis()->SetLabelFont(42);
   pol07->GetXaxis()->SetLabelSize(0.047);
   pol07->GetXaxis()->SetTitleSize(0.05);
   pol07->GetXaxis()->SetTitleOffset(0.9);
   pol07->GetXaxis()->SetTitleFont(42);
   pol07->GetYaxis()->SetLabelFont(42);
   pol07->GetYaxis()->SetLabelSize(0.047);
   pol07->GetYaxis()->SetTitleSize(0.055);
   pol07->GetYaxis()->SetTitleOffset(1.2);
   pol07->GetYaxis()->SetTitleFont(42);
   pol07->SetParameter(0,0.998088);
   pol07->SetParError(0,0.009329607);
   pol07->SetParLimits(0,0,0);
   ratioHist20->GetListOfFunctions()->Add(pol07);
   
   TPaveStats *ptstats = new TPaveStats(0.145818,0.306354,0.369032,0.561721,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(0);
   ptstats->SetFillColor(0);
   ptstats->SetFillStyle(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("#chi^{2} / ndf =  15.5 / 9");
   AText = ptstats->AddText("Prob  = 0.0775");
   AText = ptstats->AddText("p0       = 0.998 #pm 0.009 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   ratioHist20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(ratioHist20);
   ratioHist20->SetLineColor(4);
   ratioHist20->SetMarkerColor(4);
   ratioHist20->SetMarkerStyle(8);
   ratioHist20->GetXaxis()->SetTitle(" Track p_{T} Isol [GeV]");
   ratioHist20->GetXaxis()->SetLabelFont(42);
   ratioHist20->GetXaxis()->SetLabelSize(0.1);
   ratioHist20->GetXaxis()->SetTitleSize(0.1);
   ratioHist20->GetXaxis()->SetTickLength(0.06);
   ratioHist20->GetXaxis()->SetTitleOffset(0.9);
   ratioHist20->GetXaxis()->SetTitleFont(42);
   ratioHist20->GetYaxis()->SetTitle(" data / tot");
   ratioHist20->GetYaxis()->SetNdivisions(505);
   ratioHist20->GetYaxis()->SetLabelFont(42);
   ratioHist20->GetYaxis()->SetLabelSize(0.1);
   ratioHist20->GetYaxis()->SetTitleSize(0.11);
   ratioHist20->GetYaxis()->SetTickLength(0.04);
   ratioHist20->GetYaxis()->SetTitleOffset(0.6);
   ratioHist20->GetYaxis()->SetTitleFont(42);
   ratioHist20->GetZaxis()->SetLabelFont(42);
   ratioHist20->GetZaxis()->SetLabelSize(0.047);
   ratioHist20->GetZaxis()->SetTitleFont(42);
   ratioHist20->Draw("");
   ratioPad->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
