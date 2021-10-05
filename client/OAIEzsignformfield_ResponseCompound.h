/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfield_ResponseCompound.h
 *
 * An Ezsignformfield Object and children to create a complete structure
 */

#ifndef OAIEzsignformfield_ResponseCompound_H
#define OAIEzsignformfield_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsignformfield_Response.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignformfield_ResponseCompound : public OAIObject {
public:
    OAIEzsignformfield_ResponseCompound();
    OAIEzsignformfield_ResponseCompound(QString json);
    ~OAIEzsignformfield_ResponseCompound() override;

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

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfield_ResponseCompound)

#endif // OAIEzsignformfield_ResponseCompound_H