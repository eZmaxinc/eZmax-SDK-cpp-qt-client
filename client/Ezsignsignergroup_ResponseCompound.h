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
 * Ezsignsignergroup_ResponseCompound.h
 *
 * An Ezsignsignergroup Object
 */

#ifndef Ezsignsignergroup_ResponseCompound_H
#define Ezsignsignergroup_ResponseCompound_H

#include <QJsonObject>

#include "Multilingual_EzsignsignergroupDescription.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_EzsignsignergroupDescription;

class Ezsignsignergroup_ResponseCompound : public Object {
public:
    Ezsignsignergroup_ResponseCompound();
    Ezsignsignergroup_ResponseCompound(QString json);
    ~Ezsignsignergroup_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignergroupId() const;
    void setPkiEzsignsignergroupId(const qint32 &pki_ezsignsignergroup_id);
    bool is_pki_ezsignsignergroup_id_Set() const;
    bool is_pki_ezsignsignergroup_id_Valid() const;

    Multilingual_EzsignsignergroupDescription getObjEzsignsignergroupDescription() const;
    void setObjEzsignsignergroupDescription(const Multilingual_EzsignsignergroupDescription &obj_ezsignsignergroup_description);
    bool is_obj_ezsignsignergroup_description_Set() const;
    bool is_obj_ezsignsignergroup_description_Valid() const;

    QString getSEzsignsignergroupDescriptionX() const;
    void setSEzsignsignergroupDescriptionX(const QString &s_ezsignsignergroup_description_x);
    bool is_s_ezsignsignergroup_description_x_Set() const;
    bool is_s_ezsignsignergroup_description_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsignergroup_id;
    bool m_pki_ezsignsignergroup_id_isSet;
    bool m_pki_ezsignsignergroup_id_isValid;

    Multilingual_EzsignsignergroupDescription m_obj_ezsignsignergroup_description;
    bool m_obj_ezsignsignergroup_description_isSet;
    bool m_obj_ezsignsignergroup_description_isValid;

    QString m_s_ezsignsignergroup_description_x;
    bool m_s_ezsignsignergroup_description_x_isSet;
    bool m_s_ezsignsignergroup_description_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignergroup_ResponseCompound)

#endif // Ezsignsignergroup_ResponseCompound_H
