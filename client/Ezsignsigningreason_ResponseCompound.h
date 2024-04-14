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
 * Ezsignsigningreason_ResponseCompound.h
 *
 * A Ezsignsigningreason Object
 */

#ifndef Ezsignsigningreason_ResponseCompound_H
#define Ezsignsigningreason_ResponseCompound_H

#include <QJsonObject>

#include "Multilingual_EzsignsigningreasonDescription.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_EzsignsigningreasonDescription;

class Ezsignsigningreason_ResponseCompound : public Object {
public:
    Ezsignsigningreason_ResponseCompound();
    Ezsignsigningreason_ResponseCompound(QString json);
    ~Ezsignsigningreason_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsigningreasonId() const;
    void setPkiEzsignsigningreasonId(const qint32 &pki_ezsignsigningreason_id);
    bool is_pki_ezsignsigningreason_id_Set() const;
    bool is_pki_ezsignsigningreason_id_Valid() const;

    Multilingual_EzsignsigningreasonDescription getObjEzsignsigningreasonDescription() const;
    void setObjEzsignsigningreasonDescription(const Multilingual_EzsignsigningreasonDescription &obj_ezsignsigningreason_description);
    bool is_obj_ezsignsigningreason_description_Set() const;
    bool is_obj_ezsignsigningreason_description_Valid() const;

    bool isBEzsignsigningreasonIsactive() const;
    void setBEzsignsigningreasonIsactive(const bool &b_ezsignsigningreason_isactive);
    bool is_b_ezsignsigningreason_isactive_Set() const;
    bool is_b_ezsignsigningreason_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsigningreason_id;
    bool m_pki_ezsignsigningreason_id_isSet;
    bool m_pki_ezsignsigningreason_id_isValid;

    Multilingual_EzsignsigningreasonDescription m_obj_ezsignsigningreason_description;
    bool m_obj_ezsignsigningreason_description_isSet;
    bool m_obj_ezsignsigningreason_description_isValid;

    bool m_b_ezsignsigningreason_isactive;
    bool m_b_ezsignsigningreason_isactive_isSet;
    bool m_b_ezsignsigningreason_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsigningreason_ResponseCompound)

#endif // Ezsignsigningreason_ResponseCompound_H