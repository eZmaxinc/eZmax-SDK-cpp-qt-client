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
 * Ezsigntemplatepackagesigner_ResponseCompound.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef Ezsigntemplatepackagesigner_ResponseCompound_H
#define Ezsigntemplatepackagesigner_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatepackagesigner_ResponseCompound : public Object {
public:
    Ezsigntemplatepackagesigner_ResponseCompound();
    Ezsigntemplatepackagesigner_ResponseCompound(QString json);
    ~Ezsigntemplatepackagesigner_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackagesignerId() const;
    void setPkiEzsigntemplatepackagesignerId(const qint32 &pki_ezsigntemplatepackagesigner_id);
    bool is_pki_ezsigntemplatepackagesigner_id_Set() const;
    bool is_pki_ezsigntemplatepackagesigner_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    QString getSEzsigntemplatepackagesignerDescription() const;
    void setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description);
    bool is_s_ezsigntemplatepackagesigner_description_Set() const;
    bool is_s_ezsigntemplatepackagesigner_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatepackagesigner_id;
    bool m_pki_ezsigntemplatepackagesigner_id_isSet;
    bool m_pki_ezsigntemplatepackagesigner_id_isValid;

    qint32 m_fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    QString m_s_ezsigntemplatepackagesigner_description;
    bool m_s_ezsigntemplatepackagesigner_description_isSet;
    bool m_s_ezsigntemplatepackagesigner_description_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackagesigner_ResponseCompound)

#endif // Ezsigntemplatepackagesigner_ResponseCompound_H
