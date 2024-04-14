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
 * Custom_Ezsignformfielderrortest_Response.h
 *
 * A Custom Ezsignformfielderrortest Object to contain the detail of the test error
 */

#ifndef Custom_Ezsignformfielderrortest_Response_H
#define Custom_Ezsignformfielderrortest_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Ezsignformfielderrortest_Response : public Object {
public:
    Custom_Ezsignformfielderrortest_Response();
    Custom_Ezsignformfielderrortest_Response(QString json);
    ~Custom_Ezsignformfielderrortest_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfielderrortestName() const;
    void setSEzsignformfielderrortestName(const QString &s_ezsignformfielderrortest_name);
    bool is_s_ezsignformfielderrortest_name_Set() const;
    bool is_s_ezsignformfielderrortest_name_Valid() const;

    QString getSEzsignformfielderrortestDetail() const;
    void setSEzsignformfielderrortestDetail(const QString &s_ezsignformfielderrortest_detail);
    bool is_s_ezsignformfielderrortest_detail_Set() const;
    bool is_s_ezsignformfielderrortest_detail_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_ezsignformfielderrortest_name;
    bool m_s_ezsignformfielderrortest_name_isSet;
    bool m_s_ezsignformfielderrortest_name_isValid;

    QString m_s_ezsignformfielderrortest_detail;
    bool m_s_ezsignformfielderrortest_detail_isSet;
    bool m_s_ezsignformfielderrortest_detail_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Ezsignformfielderrortest_Response)

#endif // Custom_Ezsignformfielderrortest_Response_H
