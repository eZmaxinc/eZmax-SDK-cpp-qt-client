/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Reportcell.h
 *
 * A cell in a Reportrow 
 */

#ifndef OAICommon_Reportcell_H
#define OAICommon_Reportcell_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Reportcell : public OAIObject {
public:
    OAICommon_Reportcell();
    OAICommon_Reportcell(QString json);
    ~OAICommon_Reportcell() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIReportcellColumnspan() const;
    void setIReportcellColumnspan(const qint32 &i_reportcell_columnspan);
    bool is_i_reportcell_columnspan_Set() const;
    bool is_i_reportcell_columnspan_Valid() const;

    qint32 getIReportcellRowspan() const;
    void setIReportcellRowspan(const qint32 &i_reportcell_rowspan);
    bool is_i_reportcell_rowspan_Set() const;
    bool is_i_reportcell_rowspan_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 i_reportcell_columnspan;
    bool m_i_reportcell_columnspan_isSet;
    bool m_i_reportcell_columnspan_isValid;

    qint32 i_reportcell_rowspan;
    bool m_i_reportcell_rowspan_isSet;
    bool m_i_reportcell_rowspan_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Reportcell)

#endif // OAICommon_Reportcell_H
