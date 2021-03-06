void frNoBkgSubStdVsRelMETEB()
{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Dec 12 19:39:41 2016) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",16,96,900,750);
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
   spectrumPad->Range(1.307479,-0.02608696,3.127394,0.2223603);
   spectrumPad->SetFillColor(0);
   spectrumPad->SetBorderMode(0);
   spectrumPad->SetBorderSize(2);
   spectrumPad->SetLogx();
   spectrumPad->SetGridy();
   spectrumPad->SetTickx(1);
   spectrumPad->SetTicky(1);
   spectrumPad->SetLeftMargin(0.13);
   spectrumPad->SetRightMargin(0.07);
   spectrumPad->SetFrameBorderMode(0);
   spectrumPad->SetFrameBorderMode(0);
   Double_t xAxis1[22] = {35, 36, 47, 50, 62.5, 75, 82.5, 90, 105, 120, 140, 175, 200, 225, 250, 300, 350, 400, 500, 600, 800, 1000}; 
   
   TH1D *hist1 = new TH1D("hist1","",21, xAxis1);
   hist1->SetBinContent(1,0.113642);
   hist1->SetBinContent(2,0.1554669);
   hist1->SetBinContent(3,0.1159531);
   hist1->SetBinContent(4,0.09700219);
   hist1->SetBinContent(5,0.08033443);
   hist1->SetBinContent(6,0.07432131);
   hist1->SetBinContent(7,0.06855516);
   hist1->SetBinContent(8,0.0662402);
   hist1->SetBinContent(9,0.05741144);
   hist1->SetBinContent(10,0.04788844);
   hist1->SetBinContent(11,0.04372718);
   hist1->SetBinContent(12,0.03844452);
   hist1->SetBinContent(13,0.03749008);
   hist1->SetBinContent(14,0.03672717);
   hist1->SetBinContent(15,0.03556432);
   hist1->SetBinContent(16,0.03385178);
   hist1->SetBinContent(17,0.03260456);
   hist1->SetBinContent(18,0.03211273);
   hist1->SetBinContent(19,0.0320348);
   hist1->SetBinContent(20,0.03374048);
   hist1->SetBinContent(21,0.03370786);
   hist1->SetBinError(1,0.00305316);
   hist1->SetBinError(2,0.001032898);
   hist1->SetBinError(3,0.002408626);
   hist1->SetBinError(4,0.000983199);
   hist1->SetBinError(5,0.001324123);
   hist1->SetBinError(6,0.0009738147);
   hist1->SetBinError(7,0.001110443);
   hist1->SetBinError(8,0.0007000812);
   hist1->SetBinError(9,0.0008420323);
   hist1->SetBinError(10,0.0005879358);
   hist1->SetBinError(11,0.000619834);
   hist1->SetBinError(12,0.0001093732);
   hist1->SetBinError(13,0.0001443773);
   hist1->SetBinError(14,0.0001864563);
   hist1->SetBinError(15,0.0001831955);
   hist1->SetBinError(16,0.0002764412);
   hist1->SetBinError(17,0.0004078555);
   hist1->SetBinError(18,0.0004767369);
   hist1->SetBinError(19,0.0009039965);
   hist1->SetBinError(20,0.001382187);
   hist1->SetBinError(21,0.003393361);
   hist1->SetMinimum(0);
   hist1->SetMaximum(0.2);
   hist1->SetEntries(21);
   hist1->SetDirectory(0);
   hist1->SetLineColor(4);
   hist1->SetMarkerColor(4);
   hist1->SetMarkerStyle(8);
   hist1->GetXaxis()->SetMoreLogLabels();
   hist1->GetXaxis()->SetNoExponent();
   hist1->GetXaxis()->SetLabelFont(42);
   hist1->GetXaxis()->SetLabelSize(0.047);
   hist1->GetXaxis()->SetTitleSize(0.05);
   hist1->GetXaxis()->SetTitleOffset(0.9);
   hist1->GetXaxis()->SetTitleFont(42);
   hist1->GetYaxis()->SetTitle("Efficiency (no ele sub)");
   hist1->GetYaxis()->SetLabelFont(42);
   hist1->GetYaxis()->SetLabelSize(0.047);
   hist1->GetYaxis()->SetTitleSize(0.055);
   hist1->GetYaxis()->SetTitleOffset(1.2);
   hist1->GetYaxis()->SetTitleFont(42);
   hist1->GetZaxis()->SetLabelFont(42);
   hist1->GetZaxis()->SetLabelSize(0.047);
   hist1->GetZaxis()->SetTitleFont(42);
   hist1->Draw("");
   Double_t xAxis2[22] = {35, 36, 47, 50, 62.5, 75, 82.5, 90, 105, 120, 140, 175, 200, 225, 250, 300, 350, 400, 500, 600, 800, 1000}; 
   
   TH1D *hist2 = new TH1D("hist2","",21, xAxis2);
   hist2->SetBinContent(1,0.07046407);
   hist2->SetBinContent(2,0.090946);
   hist2->SetBinContent(3,0.07871047);
   hist2->SetBinContent(4,0.07375198);
   hist2->SetBinContent(5,0.06699618);
   hist2->SetBinContent(6,0.06101893);
   hist2->SetBinContent(7,0.05994286);
   hist2->SetBinContent(8,0.05843673);
   hist2->SetBinContent(9,0.05000007);
   hist2->SetBinContent(10,0.04101937);
   hist2->SetBinContent(11,0.03799097);
   hist2->SetBinContent(12,0.03320819);
   hist2->SetBinContent(13,0.03240385);
   hist2->SetBinContent(14,0.03179159);
   hist2->SetBinContent(15,0.03063481);
   hist2->SetBinContent(16,0.02938845);
   hist2->SetBinContent(17,0.02808784);
   hist2->SetBinContent(18,0.02822108);
   hist2->SetBinContent(19,0.02828783);
   hist2->SetBinContent(20,0.03008107);
   hist2->SetBinContent(21,0.03057796);
   hist2->SetBinError(1,0.00531135);
   hist2->SetBinError(2,0.001552862);
   hist2->SetBinError(3,0.003389971);
   hist2->SetBinError(4,0.001339959);
   hist2->SetBinError(5,0.001674641);
   hist2->SetBinError(6,0.00113037);
   hist2->SetBinError(7,0.001278847);
   hist2->SetBinError(8,0.0007770053);
   hist2->SetBinError(9,0.0008846548);
   hist2->SetBinError(10,0.0005910518);
   hist2->SetBinError(11,0.0006128825);
   hist2->SetBinError(12,0.0001054821);
   hist2->SetBinError(13,0.0001378857);
   hist2->SetBinError(14,0.0001771161);
   hist2->SetBinError(15,0.0001727247);
   hist2->SetBinError(16,0.0002606233);
   hist2->SetBinError(17,0.0003824226);
   hist2->SetBinError(18,0.0004511717);
   hist2->SetBinError(19,0.0008571325);
   hist2->SetBinError(20,0.001316248);
   hist2->SetBinError(21,0.00325408);
   hist2->SetEntries(21);
   hist2->SetDirectory(0);
   hist2->SetLineColor(2);
   hist2->SetMarkerColor(2);
   hist2->SetMarkerStyle(4);
   hist2->GetXaxis()->SetLabelFont(42);
   hist2->GetXaxis()->SetLabelSize(0.047);
   hist2->GetXaxis()->SetTitleSize(0.05);
   hist2->GetXaxis()->SetTitleOffset(0.9);
   hist2->GetXaxis()->SetTitleFont(42);
   hist2->GetYaxis()->SetTitle("Efficiency");
   hist2->GetYaxis()->SetLabelFont(42);
   hist2->GetYaxis()->SetLabelSize(0.047);
   hist2->GetYaxis()->SetTitleSize(0.055);
   hist2->GetYaxis()->SetTitleOffset(1.2);
   hist2->GetYaxis()->SetTitleFont(42);
   hist2->GetZaxis()->SetLabelFont(42);
   hist2->GetZaxis()->SetLabelSize(0.047);
   hist2->GetZaxis()->SetTitleFont(42);
   hist2->Draw(" SAME");
   
   TLegend *leg = new TLegend(0.5785805,0.6652214,0.9008746,0.8378498,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hist","no MET cut","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hist","PF MET/E_{T} < 0.4","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(4);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveLabel *pl = new TPaveLabel(0.650328,0.4825565,0.8803754,0.6110241,"barrel electrons","brNDC");
   pl->SetBorderSize(0);
   pl->SetFillStyle(0);
   pl->SetTextAlign(12);
   pl->SetTextFont(42);
   pl->SetTextSize(0.438598);
   pl->Draw();
   
   pl = new TPaveLabel(0.6161625,0.4082862,0.838238,0.518688,"273158 #leq run #leq 284044","brNDC");
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
   ratioPad->Range(1.307479,0.2692308,3.127394,1.038462);
   ratioPad->SetFillColor(0);
   ratioPad->SetFillStyle(4000);
   ratioPad->SetBorderMode(0);
   ratioPad->SetBorderSize(2);
   ratioPad->SetLogx();
   ratioPad->SetGridy();
   ratioPad->SetTickx(1);
   ratioPad->SetTicky(1);
   ratioPad->SetLeftMargin(0.13);
   ratioPad->SetRightMargin(0.07);
   ratioPad->SetTopMargin(0.05);
   ratioPad->SetBottomMargin(0.3);
   ratioPad->SetFrameBorderMode(0);
   ratioPad->SetFrameBorderMode(0);
   Double_t xAxis3[22] = {35, 36, 47, 50, 62.5, 75, 82.5, 90, 105, 120, 140, 175, 200, 225, 250, 300, 350, 400, 500, 600, 800, 1000}; 
   
   TH1D *ratioHist3 = new TH1D("ratioHist3","",21, xAxis3);
   ratioHist3->SetBinContent(1,0.6200529);
   ratioHist3->SetBinContent(2,0.5849862);
   ratioHist3->SetBinContent(3,0.6788129);
   ratioHist3->SetBinContent(4,0.7603125);
   ratioHist3->SetBinContent(5,0.8339659);
   ratioHist3->SetBinContent(6,0.8210151);
   ratioHist3->SetBinContent(7,0.8743742);
   ratioHist3->SetBinContent(8,0.8821943);
   ratioHist3->SetBinContent(9,0.8709079);
   ratioHist3->SetBinContent(10,0.8565609);
   ratioHist3->SetBinContent(11,0.8688181);
   ratioHist3->SetBinContent(12,0.8637953);
   ratioHist3->SetBinContent(13,0.8643312);
   ratioHist3->SetBinContent(14,0.865615);
   ratioHist3->SetBinContent(15,0.8613917);
   ratioHist3->SetBinContent(16,0.8681508);
   ratioHist3->SetBinContent(17,0.8614697);
   ratioHist3->SetBinContent(18,0.8788128);
   ratioHist3->SetBinContent(19,0.8830342);
   ratioHist3->SetBinContent(20,0.8915424);
   ratioHist3->SetBinContent(21,0.9071461);
   ratioHist3->SetBinError(1,0.04961762);
   ratioHist3->SetBinError(2,0.01071788);
   ratioHist3->SetBinError(3,0.03245849);
   ratioHist3->SetBinError(4,0.01581793);
   ratioHist3->SetBinError(5,0.02497001);
   ratioHist3->SetBinError(6,0.01862917);
   ratioHist3->SetBinError(7,0.02342159);
   ratioHist3->SetBinError(8,0.01498426);
   ratioHist3->SetBinError(9,0.02001487);
   ratioHist3->SetBinError(10,0.01621485);
   ratioHist3->SetBinError(11,0.01865802);
   ratioHist3->SetBinError(12,0.00368338);
   ratioHist3->SetBinError(13,0.004960521);
   ratioHist3->SetBinError(14,0.006524447);
   ratioHist3->SetBinError(15,0.006578405);
   ratioHist3->SetBinError(16,0.0104659);
   ratioHist3->SetBinError(17,0.01592796);
   ratioHist3->SetBinError(18,0.01917306);
   ratioHist3->SetBinError(19,0.03656271);
   ratioHist3->SetBinError(20,0.05343902);
   ratioHist3->SetBinError(21,0.1328882);
   ratioHist3->SetMinimum(0.5);
   ratioHist3->SetMaximum(1);
   ratioHist3->SetEntries(10314.92);
   ratioHist3->SetMarkerStyle(8);
   ratioHist3->GetXaxis()->SetTitle("E_{T}^{HLT} [GeV]");
   ratioHist3->GetXaxis()->SetMoreLogLabels();
   ratioHist3->GetXaxis()->SetNoExponent();
   ratioHist3->GetXaxis()->SetLabelFont(42);
   ratioHist3->GetXaxis()->SetLabelSize(0.1);
   ratioHist3->GetXaxis()->SetTitleSize(0.1);
   ratioHist3->GetXaxis()->SetTitleOffset(0.9);
   ratioHist3->GetXaxis()->SetTitleFont(42);
   ratioHist3->GetYaxis()->SetTitle("ratio");
   ratioHist3->GetYaxis()->SetNdivisions(505);
   ratioHist3->GetYaxis()->SetLabelFont(42);
   ratioHist3->GetYaxis()->SetLabelSize(0.1);
   ratioHist3->GetYaxis()->SetTitleSize(0.1);
   ratioHist3->GetYaxis()->SetTitleOffset(0.65);
   ratioHist3->GetYaxis()->SetTitleFont(42);
   ratioHist3->GetZaxis()->SetLabelFont(42);
   ratioHist3->GetZaxis()->SetLabelSize(0.047);
   ratioHist3->GetZaxis()->SetTitleFont(42);
   ratioHist3->Draw("");
   ratioPad->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
