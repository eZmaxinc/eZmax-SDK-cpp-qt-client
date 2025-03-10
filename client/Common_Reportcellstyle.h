/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Reportcellstyle.h
 *
 * Styles applied to a Reportcell 
 */

#ifndef Common_Reportcellstyle_H
#define Common_Reportcellstyle_H

#include <QJsonObject>

#include "Enum_Fontunderline.h"
#include "Enum_Fontweight.h"
#include "Enum_Horizontalalignment.h"
#include "Enum_Verticalalignment.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Reportcellstyle : public Object {
public:
    Common_Reportcellstyle();
    Common_Reportcellstyle(QString json);
    ~Common_Reportcellstyle() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBReportcellstyleBordertop() const;
    void setBReportcellstyleBordertop(const bool &b_reportcellstyle_bordertop);
    bool is_b_reportcellstyle_bordertop_Set() const;
    bool is_b_reportcellstyle_bordertop_Valid() const;

    bool isBReportcellstyleBorderbottom() const;
    void setBReportcellstyleBorderbottom(const bool &b_reportcellstyle_borderbottom);
    bool is_b_reportcellstyle_borderbottom_Set() const;
    bool is_b_reportcellstyle_borderbottom_Valid() const;

    bool isBReportcellstyleBorderleft() const;
    void setBReportcellstyleBorderleft(const bool &b_reportcellstyle_borderleft);
    bool is_b_reportcellstyle_borderleft_Set() const;
    bool is_b_reportcellstyle_borderleft_Valid() const;

    bool isBReportcellstyleBorderright() const;
    void setBReportcellstyleBorderright(const bool &b_reportcellstyle_borderright);
    bool is_b_reportcellstyle_borderright_Set() const;
    bool is_b_reportcellstyle_borderright_Valid() const;

    Enum_Horizontalalignment getEReportcellHorizontalalignment() const;
    void setEReportcellHorizontalalignment(const Enum_Horizontalalignment &e_reportcell_horizontalalignment);
    bool is_e_reportcell_horizontalalignment_Set() const;
    bool is_e_reportcell_horizontalalignment_Valid() const;

    Enum_Verticalalignment getEReportcellVerticalalignment() const;
    void setEReportcellVerticalalignment(const Enum_Verticalalignment &e_reportcell_verticalalignment);
    bool is_e_reportcell_verticalalignment_Set() const;
    bool is_e_reportcell_verticalalignment_Valid() const;

    Enum_Fontweight getEReportcellFontweight() const;
    void setEReportcellFontweight(const Enum_Fontweight &e_reportcell_fontweight);
    bool is_e_reportcell_fontweight_Set() const;
    bool is_e_reportcell_fontweight_Valid() const;

    Enum_Fontunderline getEReportcellFontunderline() const;
    void setEReportcellFontunderline(const Enum_Fontunderline &e_reportcell_fontunderline);
    bool is_e_reportcell_fontunderline_Set() const;
    bool is_e_reportcell_fontunderline_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_b_reportcellstyle_bordertop;
    bool m_b_reportcellstyle_bordertop_isSet;
    bool m_b_reportcellstyle_bordertop_isValid;

    bool m_b_reportcellstyle_borderbottom;
    bool m_b_reportcellstyle_borderbottom_isSet;
    bool m_b_reportcellstyle_borderbottom_isValid;

    bool m_b_reportcellstyle_borderleft;
    bool m_b_reportcellstyle_borderleft_isSet;
    bool m_b_reportcellstyle_borderleft_isValid;

    bool m_b_reportcellstyle_borderright;
    bool m_b_reportcellstyle_borderright_isSet;
    bool m_b_reportcellstyle_borderright_isValid;

    Enum_Horizontalalignment m_e_reportcell_horizontalalignment;
    bool m_e_reportcell_horizontalalignment_isSet;
    bool m_e_reportcell_horizontalalignment_isValid;

    Enum_Verticalalignment m_e_reportcell_verticalalignment;
    bool m_e_reportcell_verticalalignment_isSet;
    bool m_e_reportcell_verticalalignment_isValid;

    Enum_Fontweight m_e_reportcell_fontweight;
    bool m_e_reportcell_fontweight_isSet;
    bool m_e_reportcell_fontweight_isValid;

    Enum_Fontunderline m_e_reportcell_fontunderline;
    bool m_e_reportcell_fontunderline_isSet;
    bool m_e_reportcell_fontunderline_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Reportcellstyle)

#endif // Common_Reportcellstyle_H
