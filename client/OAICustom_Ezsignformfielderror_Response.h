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
 * OAICustom_Ezsignformfielderror_Response.h
 *
 * A Custom Ezsignformfield Object to contain an error list
 */

#ifndef OAICustom_Ezsignformfielderror_Response_H
#define OAICustom_Ezsignformfielderror_Response_H

#include <QJsonObject>

#include "OAICustom_Ezsignformfielderrortest_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAICustom_Ezsignformfielderrortest_Response;

class OAICustom_Ezsignformfielderror_Response : public OAIObject {
public:
    OAICustom_Ezsignformfielderror_Response();
    OAICustom_Ezsignformfielderror_Response(QString json);
    ~OAICustom_Ezsignformfielderror_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfieldLabel() const;
    void setSEzsignformfieldLabel(const QString &s_ezsignformfield_label);
    bool is_s_ezsignformfield_label_Set() const;
    bool is_s_ezsignformfield_label_Valid() const;

    QList<OAICustom_Ezsignformfielderrortest_Response> getAObjEzsignformfielderrortest() const;
    void setAObjEzsignformfielderrortest(const QList<OAICustom_Ezsignformfielderrortest_Response> &a_obj_ezsignformfielderrortest);
    bool is_a_obj_ezsignformfielderrortest_Set() const;
    bool is_a_obj_ezsignformfielderrortest_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_ezsignformfield_label;
    bool m_s_ezsignformfield_label_isSet;
    bool m_s_ezsignformfield_label_isValid;

    QList<OAICustom_Ezsignformfielderrortest_Response> m_a_obj_ezsignformfielderrortest;
    bool m_a_obj_ezsignformfielderrortest_isSet;
    bool m_a_obj_ezsignformfielderrortest_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICustom_Ezsignformfielderror_Response)

#endif // OAICustom_Ezsignformfielderror_Response_H
