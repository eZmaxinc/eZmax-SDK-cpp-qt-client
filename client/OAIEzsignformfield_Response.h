/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfield_Response.h
 *
 * An Ezsignformfield Object
 */

#ifndef OAIEzsignformfield_Response_H
#define OAIEzsignformfield_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignformfield_Response : public OAIObject {
public:
    OAIEzsignformfield_Response();
    OAIEzsignformfield_Response(QString json);
    ~OAIEzsignformfield_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfieldLabel() const;
    void setSEzsignformfieldLabel(const QString &s_ezsignformfield_label);
    bool is_s_ezsignformfield_label_Set() const;
    bool is_s_ezsignformfield_label_Valid() const;

    QString getSEzsignformfieldValue() const;
    void setSEzsignformfieldValue(const QString &s_ezsignformfield_value);
    bool is_s_ezsignformfield_value_Set() const;
    bool is_s_ezsignformfield_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsignformfield_label;
    bool m_s_ezsignformfield_label_isSet;
    bool m_s_ezsignformfield_label_isValid;

    QString s_ezsignformfield_value;
    bool m_s_ezsignformfield_value_isSet;
    bool m_s_ezsignformfield_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfield_Response)

#endif // OAIEzsignformfield_Response_H
