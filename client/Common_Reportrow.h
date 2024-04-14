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
 * Common_Reportrow.h
 *
 * A row in a Reportsubsectionpart 
 */

#ifndef Common_Reportrow_H
#define Common_Reportrow_H

#include <QJsonObject>

#include "Common_Reportcell.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Reportcell;

class Common_Reportrow : public Object {
public:
    Common_Reportrow();
    Common_Reportrow(QString json);
    ~Common_Reportrow() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Common_Reportcell> getAObjReportcell() const;
    void setAObjReportcell(const QList<Common_Reportcell> &a_obj_reportcell);
    bool is_a_obj_reportcell_Set() const;
    bool is_a_obj_reportcell_Valid() const;

    qint32 getIReportrowHeight() const;
    void setIReportrowHeight(const qint32 &i_reportrow_height);
    bool is_i_reportrow_height_Set() const;
    bool is_i_reportrow_height_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Common_Reportcell> m_a_obj_reportcell;
    bool m_a_obj_reportcell_isSet;
    bool m_a_obj_reportcell_isValid;

    qint32 m_i_reportrow_height;
    bool m_i_reportrow_height_isSet;
    bool m_i_reportrow_height_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Reportrow)

#endif // Common_Reportrow_H
