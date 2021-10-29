/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfieldgroup_Response.h
 *
 * An Ezsignformfieldgroup Object
 */

#ifndef OAIEzsignformfieldgroup_Response_H
#define OAIEzsignformfieldgroup_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignformfieldgroup_Response : public OAIObject {
public:
    OAIEzsignformfieldgroup_Response();
    OAIEzsignformfieldgroup_Response(QString json);
    ~OAIEzsignformfieldgroup_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfieldgroupLabel() const;
    void setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label);
    bool is_s_ezsignformfieldgroup_label_Set() const;
    bool is_s_ezsignformfieldgroup_label_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsignformfieldgroup_label;
    bool m_s_ezsignformfieldgroup_label_isSet;
    bool m_s_ezsignformfieldgroup_label_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroup_Response)

#endif // OAIEzsignformfieldgroup_Response_H
