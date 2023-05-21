/********************************************************************************
** Form generated from reading UI file 'pdb.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDB_H
#define UI_PDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDB
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonViewPDB3D;
    QTextEdit *textEditFasta;
    QLabel *label_4;
    QPushButton *pushButtonDownloadPDB;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditPDB_ID;
    QLineEdit *lineEditPDB_filename;
    QLabel *label_7;
    QLineEdit *lineEditAtom;
    QLineEdit *lineEditChainsOfInterest;
    QCheckBox *checkBoxAllowJumps;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBoxLatticeDistance;
    QDoubleSpinBox *doubleSpinBoxAverageDistancePDB;
    QLabel *label_13;
    QLabel *label_14;
    QCheckBox *checkBoxDiscretizeSideChains;
    QTextEdit *textEditDiscretizedPDB;
    QLabel *label_15;
    QComboBox *comboBoxListChains;
    QLabel *label_16;
    QLineEdit *lineEditFileMergedChains;
    QPushButton *pushButtonMergeChains;
    QLineEdit *lineEditWorkingDirectory;
    QLabel *label_17;
    QLineEdit *lineEditFileOutputLatfit;
    QPushButton *pushButtonDiscretize;
    QPushButton *pushButtonViewDiscretized;
    QPushButton *pushButtonViewReceptorStructures;
    QTextEdit *textEditMultiChainStructure;
    QPushButton *pushButtonConvertLattice;
    QLabel *label_19;
    QLineEdit *lineEditFileConvertedLattice;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_20;
    QFrame *line_3;
    QCheckBox *checkBoxRandomlyPicked;
    QLabel *label_21;
    QSpinBox *spinBoxNumberReceptorsToShow;
    QLabel *label_22;
    QFrame *line_4;
    QLabel *label_23;
    QLabel *label_24;
    QSpinBox *spinBoxSizeReceptors;
    QSpinBox *spinBoxMinInteract;
    QPushButton *pushButtonView3DLatfitOutput;
    QPushButton *pushButtonIterate;
    QCheckBox *checkBoxDeInsert;
    QSpinBox *spinBoxnKeep;
    QLabel *label_11;

    void setupUi(QWidget *PDB)
    {
        if (PDB->objectName().isEmpty())
            PDB->setObjectName("PDB");
        PDB->resize(977, 613);
        label = new QLabel(PDB);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 47, 13));
        label_2 = new QLabel(PDB);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 30, 21, 20));
        label_3 = new QLabel(PDB);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 20, 47, 13));
        pushButtonViewPDB3D = new QPushButton(PDB);
        pushButtonViewPDB3D->setObjectName("pushButtonViewPDB3D");
        pushButtonViewPDB3D->setGeometry(QRect(30, 80, 111, 23));
        textEditFasta = new QTextEdit(PDB);
        textEditFasta->setObjectName("textEditFasta");
        textEditFasta->setGeometry(QRect(640, 40, 321, 261));
        label_4 = new QLabel(PDB);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(620, 20, 47, 13));
        pushButtonDownloadPDB = new QPushButton(PDB);
        pushButtonDownloadPDB->setObjectName("pushButtonDownloadPDB");
        pushButtonDownloadPDB->setGeometry(QRect(120, 50, 21, 23));
        label_5 = new QLabel(PDB);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 110, 51, 16));
        label_6 = new QLabel(PDB);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 220, 121, 16));
        lineEditPDB_ID = new QLineEdit(PDB);
        lineEditPDB_ID->setObjectName("lineEditPDB_ID");
        lineEditPDB_ID->setGeometry(QRect(20, 40, 81, 20));
        lineEditPDB_filename = new QLineEdit(PDB);
        lineEditPDB_filename->setObjectName("lineEditPDB_filename");
        lineEditPDB_filename->setGeometry(QRect(160, 40, 181, 20));
        label_7 = new QLabel(PDB);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 130, 101, 16));
        lineEditAtom = new QLineEdit(PDB);
        lineEditAtom->setObjectName("lineEditAtom");
        lineEditAtom->setGeometry(QRect(180, 220, 81, 20));
        lineEditChainsOfInterest = new QLineEdit(PDB);
        lineEditChainsOfInterest->setObjectName("lineEditChainsOfInterest");
        lineEditChainsOfInterest->setGeometry(QRect(180, 130, 81, 20));
        checkBoxAllowJumps = new QCheckBox(PDB);
        checkBoxAllowJumps->setObjectName("checkBoxAllowJumps");
        checkBoxAllowJumps->setGeometry(QRect(180, 250, 70, 17));
        label_8 = new QLabel(PDB);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 250, 101, 16));
        label_9 = new QLabel(PDB);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 280, 101, 16));
        label_10 = new QLabel(PDB);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(180, 280, 101, 16));
        label_12 = new QLabel(PDB);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 310, 101, 16));
        doubleSpinBoxLatticeDistance = new QDoubleSpinBox(PDB);
        doubleSpinBoxLatticeDistance->setObjectName("doubleSpinBoxLatticeDistance");
        doubleSpinBoxLatticeDistance->setGeometry(QRect(180, 310, 81, 22));
        doubleSpinBoxAverageDistancePDB = new QDoubleSpinBox(PDB);
        doubleSpinBoxAverageDistancePDB->setObjectName("doubleSpinBoxAverageDistancePDB");
        doubleSpinBoxAverageDistancePDB->setGeometry(QRect(300, 310, 81, 22));
        label_13 = new QLabel(PDB);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(300, 290, 101, 16));
        label_14 = new QLabel(PDB);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 340, 151, 16));
        checkBoxDiscretizeSideChains = new QCheckBox(PDB);
        checkBoxDiscretizeSideChains->setObjectName("checkBoxDiscretizeSideChains");
        checkBoxDiscretizeSideChains->setGeometry(QRect(180, 340, 70, 17));
        textEditDiscretizedPDB = new QTextEdit(PDB);
        textEditDiscretizedPDB->setObjectName("textEditDiscretizedPDB");
        textEditDiscretizedPDB->setGeometry(QRect(640, 330, 321, 261));
        label_15 = new QLabel(PDB);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(620, 310, 211, 16));
        comboBoxListChains = new QComboBox(PDB);
        comboBoxListChains->setObjectName("comboBoxListChains");
        comboBoxListChains->setGeometry(QRect(300, 130, 201, 22));
        label_16 = new QLabel(PDB);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(300, 110, 161, 16));
        lineEditFileMergedChains = new QLineEdit(PDB);
        lineEditFileMergedChains->setObjectName("lineEditFileMergedChains");
        lineEditFileMergedChains->setGeometry(QRect(180, 160, 321, 20));
        pushButtonMergeChains = new QPushButton(PDB);
        pushButtonMergeChains->setObjectName("pushButtonMergeChains");
        pushButtonMergeChains->setGeometry(QRect(30, 160, 141, 23));
        lineEditWorkingDirectory = new QLineEdit(PDB);
        lineEditWorkingDirectory->setObjectName("lineEditWorkingDirectory");
        lineEditWorkingDirectory->setGeometry(QRect(420, 40, 181, 20));
        label_17 = new QLabel(PDB);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(400, 20, 141, 16));
        lineEditFileOutputLatfit = new QLineEdit(PDB);
        lineEditFileOutputLatfit->setObjectName("lineEditFileOutputLatfit");
        lineEditFileOutputLatfit->setGeometry(QRect(210, 380, 291, 20));
        pushButtonDiscretize = new QPushButton(PDB);
        pushButtonDiscretize->setObjectName("pushButtonDiscretize");
        pushButtonDiscretize->setGeometry(QRect(30, 380, 171, 23));
        pushButtonViewDiscretized = new QPushButton(PDB);
        pushButtonViewDiscretized->setObjectName("pushButtonViewDiscretized");
        pushButtonViewDiscretized->setGeometry(QRect(70, 440, 181, 23));
        pushButtonViewReceptorStructures = new QPushButton(PDB);
        pushButtonViewReceptorStructures->setObjectName("pushButtonViewReceptorStructures");
        pushButtonViewReceptorStructures->setGeometry(QRect(70, 470, 181, 23));
        textEditMultiChainStructure = new QTextEdit(PDB);
        textEditMultiChainStructure->setObjectName("textEditMultiChainStructure");
        textEditMultiChainStructure->setGeometry(QRect(280, 460, 341, 131));
        pushButtonConvertLattice = new QPushButton(PDB);
        pushButtonConvertLattice->setObjectName("pushButtonConvertLattice");
        pushButtonConvertLattice->setGeometry(QRect(30, 410, 171, 23));
        label_19 = new QLabel(PDB);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(280, 440, 211, 16));
        lineEditFileConvertedLattice = new QLineEdit(PDB);
        lineEditFileConvertedLattice->setObjectName("lineEditFileConvertedLattice");
        lineEditFileConvertedLattice->setGeometry(QRect(210, 410, 291, 20));
        line = new QFrame(PDB);
        line->setObjectName("line");
        line->setGeometry(QRect(500, 380, 141, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(PDB);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(10, 130, 20, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(PDB);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(10, 200, 51, 16));
        line_3 = new QFrame(PDB);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(10, 220, 21, 181));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        checkBoxRandomlyPicked = new QCheckBox(PDB);
        checkBoxRandomlyPicked->setObjectName("checkBoxRandomlyPicked");
        checkBoxRandomlyPicked->setGeometry(QRect(100, 500, 121, 17));
        label_21 = new QLabel(PDB);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(100, 520, 91, 16));
        spinBoxNumberReceptorsToShow = new QSpinBox(PDB);
        spinBoxNumberReceptorsToShow->setObjectName("spinBoxNumberReceptorsToShow");
        spinBoxNumberReceptorsToShow->setGeometry(QRect(200, 520, 71, 22));
        label_22 = new QLabel(PDB);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(10, 470, 51, 16));
        line_4 = new QFrame(PDB);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(10, 490, 21, 91));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_23 = new QLabel(PDB);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(100, 540, 91, 16));
        label_24 = new QLabel(PDB);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(100, 560, 71, 16));
        spinBoxSizeReceptors = new QSpinBox(PDB);
        spinBoxSizeReceptors->setObjectName("spinBoxSizeReceptors");
        spinBoxSizeReceptors->setGeometry(QRect(200, 540, 71, 22));
        spinBoxMinInteract = new QSpinBox(PDB);
        spinBoxMinInteract->setObjectName("spinBoxMinInteract");
        spinBoxMinInteract->setGeometry(QRect(200, 560, 71, 22));
        pushButtonView3DLatfitOutput = new QPushButton(PDB);
        pushButtonView3DLatfitOutput->setObjectName("pushButtonView3DLatfitOutput");
        pushButtonView3DLatfitOutput->setGeometry(QRect(510, 380, 111, 23));
        pushButtonIterate = new QPushButton(PDB);
        pushButtonIterate->setObjectName("pushButtonIterate");
        pushButtonIterate->setGeometry(QRect(410, 310, 75, 23));
        checkBoxDeInsert = new QCheckBox(PDB);
        checkBoxDeInsert->setObjectName("checkBoxDeInsert");
        checkBoxDeInsert->setGeometry(QRect(520, 160, 70, 17));
        spinBoxnKeep = new QSpinBox(PDB);
        spinBoxnKeep->setObjectName("spinBoxnKeep");
        spinBoxnKeep->setGeometry(QRect(380, 240, 71, 22));
        label_11 = new QLabel(PDB);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(350, 220, 131, 16));

        retranslateUi(PDB);

        QMetaObject::connectSlotsByName(PDB);
    } // setupUi

    void retranslateUi(QWidget *PDB)
    {
        PDB->setWindowTitle(QCoreApplication::translate("PDB", "Form", nullptr));
        label->setText(QCoreApplication::translate("PDB", "PDB ID", nullptr));
        label_2->setText(QCoreApplication::translate("PDB", "or", nullptr));
        label_3->setText(QCoreApplication::translate("PDB", "Filename", nullptr));
        pushButtonViewPDB3D->setText(QCoreApplication::translate("PDB", "View PDB in 3D", nullptr));
        label_4->setText(QCoreApplication::translate("PDB", "FASTA", nullptr));
        pushButtonDownloadPDB->setText(QCoreApplication::translate("PDB", "->", nullptr));
        label_5->setText(QCoreApplication::translate("PDB", "pdb-tools", nullptr));
        label_6->setText(QCoreApplication::translate("PDB", "Atom: CA, CB or CoM", nullptr));
        label_7->setText(QCoreApplication::translate("PDB", "Chains of interest", nullptr));
        checkBoxAllowJumps->setText(QCoreApplication::translate("PDB", "CheckBox", nullptr));
        label_8->setText(QCoreApplication::translate("PDB", "Allow jumps", nullptr));
        label_9->setText(QCoreApplication::translate("PDB", "Lattice type:", nullptr));
        label_10->setText(QCoreApplication::translate("PDB", "Cubic", nullptr));
        label_12->setText(QCoreApplication::translate("PDB", "Lattice distance:", nullptr));
        label_13->setText(QCoreApplication::translate("PDB", "Average from PDB", nullptr));
        label_14->setText(QCoreApplication::translate("PDB", "Discretize side chains as well", nullptr));
        checkBoxDiscretizeSideChains->setText(QCoreApplication::translate("PDB", "CheckBox", nullptr));
        label_15->setText(QCoreApplication::translate("PDB", "Discretized PDB", nullptr));
        label_16->setText(QCoreApplication::translate("PDB", "Chains read from the PDB", nullptr));
        pushButtonMergeChains->setText(QCoreApplication::translate("PDB", "-> Merge chains into file:", nullptr));
        label_17->setText(QCoreApplication::translate("PDB", "Working directory", nullptr));
        pushButtonDiscretize->setText(QCoreApplication::translate("PDB", "-> Discretize into file:", nullptr));
        pushButtonViewDiscretized->setText(QCoreApplication::translate("PDB", "View PDB+ discretized in 3D", nullptr));
        pushButtonViewReceptorStructures->setText(QCoreApplication::translate("PDB", "View receptor structures", nullptr));
        pushButtonConvertLattice->setText(QCoreApplication::translate("PDB", "-> Convert into lattice into file:", nullptr));
        label_19->setText(QCoreApplication::translate("PDB", "Multi-chain structure", nullptr));
        label_20->setText(QCoreApplication::translate("PDB", "latfit", nullptr));
        checkBoxRandomlyPicked->setText(QCoreApplication::translate("PDB", "randomly picked", nullptr));
        label_21->setText(QCoreApplication::translate("PDB", "number to show:", nullptr));
        label_22->setText(QCoreApplication::translate("PDB", "Ymir", nullptr));
        label_23->setText(QCoreApplication::translate("PDB", "size receptors", nullptr));
        label_24->setText(QCoreApplication::translate("PDB", "min interact", nullptr));
        pushButtonView3DLatfitOutput->setText(QCoreApplication::translate("PDB", "View 3D Latfit Output", nullptr));
        pushButtonIterate->setText(QCoreApplication::translate("PDB", "iterate", nullptr));
        checkBoxDeInsert->setText(QCoreApplication::translate("PDB", "DeInsert", nullptr));
        label_11->setText(QCoreApplication::translate("PDB", "nKeep struct per iteration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDB: public Ui_PDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDB_H
