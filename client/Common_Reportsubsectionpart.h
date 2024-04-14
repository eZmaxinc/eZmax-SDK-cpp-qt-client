/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Reportsubsectionpart.h
 *
 * A part in the Reportsubsection 
 */

#ifndef Common_Reportsubsectionpart_H
#define Common_Reportsubsectionpart_H

#include <QJsonObject>

#include "Common_Reportrow.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Reportrow;

class Common_Reportsubsectionpart : public Object {
public:
    Common_Reportsubsectionpart();
    Common_Reportsubsectionpart(QString json);
    ~Common_Reportsubsectionpart() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEReportsubsectionpartType() const;
    void setEReportsubsectionpartType(const QString &e_reportsubsectionpart_type);
    bool is_e_reportsubsectionpart_type_Set() const;
    bool is_e_reportsubsectionpart_type_Valid() const;

    QList<Common_Reportrow> getAObjReportrow() const;
    void setAObjReportrow(const QList<Common_Reportrow> &a_obj_reportrow);
    bool is_a_obj_reportrow_Set() const;
    bool is_a_obj_reportrow_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_e_reportsubsectionpart_type;
    bool m_e_reportsubsectionpart_type_isSet;
    bool m_e_reportsubsectionpart_type_isValid;

    QList<Common_Reportrow> m_a_obj_reportrow;
    bool m_a_obj_reportrow_isSet;
    bool m_a_obj_reportrow_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Reportsubsectionpart)

#endif // Common_Reportsubsectionpart_H
