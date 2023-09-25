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
 * Ezsigntemplatepackagesignermembership_Request.h
 *
 * A Ezsigntemplatepackagesignermembership Object
 */

#ifndef Ezsigntemplatepackagesignermembership_Request_H
#define Ezsigntemplatepackagesignermembership_Request_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatepackagesignermembership_Request : public Object {
public:
    Ezsigntemplatepackagesignermembership_Request();
    Ezsigntemplatepackagesignermembership_Request(QString json);
    ~Ezsigntemplatepackagesignermembership_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackagesignermembershipId() const;
    void setPkiEzsigntemplatepackagesignermembershipId(const qint32 &pki_ezsigntemplatepackagesignermembership_id);
    bool is_pki_ezsigntemplatepackagesignermembership_id_Set() const;
    bool is_pki_ezsigntemplatepackagesignermembership_id_Valid() const;

    qint32 getFkiEzsigntemplatepackagemembershipId() const;
    void setFkiEzsigntemplatepackagemembershipId(const qint32 &fki_ezsigntemplatepackagemembership_id);
    bool is_fki_ezsigntemplatepackagemembership_id_Set() const;
    bool is_fki_ezsigntemplatepackagemembership_id_Valid() const;

    qint32 getFkiEzsigntemplatepackagesignerId() const;
    void setFkiEzsigntemplatepackagesignerId(const qint32 &fki_ezsigntemplatepackagesigner_id);
    bool is_fki_ezsigntemplatepackagesigner_id_Set() const;
    bool is_fki_ezsigntemplatepackagesigner_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    qint32 getIEzsigntemplatepackagesignermembershipCopy() const;
    void setIEzsigntemplatepackagesignermembershipCopy(const qint32 &i_ezsigntemplatepackagesignermembership_copy);
    bool is_i_ezsigntemplatepackagesignermembership_copy_Set() const;
    bool is_i_ezsigntemplatepackagesignermembership_copy_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatepackagesignermembership_id;
    bool m_pki_ezsigntemplatepackagesignermembership_id_isSet;
    bool m_pki_ezsigntemplatepackagesignermembership_id_isValid;

    qint32 m_fki_ezsigntemplatepackagemembership_id;
    bool m_fki_ezsigntemplatepackagemembership_id_isSet;
    bool m_fki_ezsigntemplatepackagemembership_id_isValid;

    qint32 m_fki_ezsigntemplatepackagesigner_id;
    bool m_fki_ezsigntemplatepackagesigner_id_isSet;
    bool m_fki_ezsigntemplatepackagesigner_id_isValid;

    qint32 m_fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;

    qint32 m_i_ezsigntemplatepackagesignermembership_copy;
    bool m_i_ezsigntemplatepackagesignermembership_copy_isSet;
    bool m_i_ezsigntemplatepackagesignermembership_copy_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackagesignermembership_Request)

#endif // Ezsigntemplatepackagesignermembership_Request_H
