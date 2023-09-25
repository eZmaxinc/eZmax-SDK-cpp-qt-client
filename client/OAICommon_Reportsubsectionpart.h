/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Reportsubsectionpart.h
 *
 * A part in the Reportsubsection 
 */

#ifndef OAICommon_Reportsubsectionpart_H
#define OAICommon_Reportsubsectionpart_H

#include <QJsonObject>

#include "OAICommon_Reportrow.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICommon_Reportrow;

class OAICommon_Reportsubsectionpart : public OAIObject {
public:
    OAICommon_Reportsubsectionpart();
    OAICommon_Reportsubsectionpart(QString json);
    ~OAICommon_Reportsubsectionpart() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEReportsubsectionpartType() const;
    void setEReportsubsectionpartType(const QString &e_reportsubsectionpart_type);
    bool is_e_reportsubsectionpart_type_Set() const;
    bool is_e_reportsubsectionpart_type_Valid() const;

    QList<OAICommon_Reportrow> getAObjReportrow() const;
    void setAObjReportrow(const QList<OAICommon_Reportrow> &a_obj_reportrow);
    bool is_a_obj_reportrow_Set() const;
    bool is_a_obj_reportrow_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_e_reportsubsectionpart_type;
    bool m_e_reportsubsectionpart_type_isSet;
    bool m_e_reportsubsectionpart_type_isValid;

    QList<OAICommon_Reportrow> m_a_obj_reportrow;
    bool m_a_obj_reportrow_isSet;
    bool m_a_obj_reportrow_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICommon_Reportsubsectionpart)

#endif // OAICommon_Reportsubsectionpart_H
