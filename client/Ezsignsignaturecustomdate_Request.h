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
 * Ezsignsignaturecustomdate_Request.h
 *
 * An Ezsignsignaturecustomdate Object
 */

#ifndef Ezsignsignaturecustomdate_Request_H
#define Ezsignsignaturecustomdate_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignsignaturecustomdate_Request : public Object {
public:
    Ezsignsignaturecustomdate_Request();
    Ezsignsignaturecustomdate_Request(QString json);
    ~Ezsignsignaturecustomdate_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignaturecustomdateId() const;
    void setPkiEzsignsignaturecustomdateId(const qint32 &pki_ezsignsignaturecustomdate_id);
    bool is_pki_ezsignsignaturecustomdate_id_Set() const;
    bool is_pki_ezsignsignaturecustomdate_id_Valid() const;

    qint32 getIEzsignsignaturecustomdateX() const;
    void setIEzsignsignaturecustomdateX(const qint32 &i_ezsignsignaturecustomdate_x);
    bool is_i_ezsignsignaturecustomdate_x_Set() const;
    bool is_i_ezsignsignaturecustomdate_x_Valid() const;

    qint32 getIEzsignsignaturecustomdateY() const;
    void setIEzsignsignaturecustomdateY(const qint32 &i_ezsignsignaturecustomdate_y);
    bool is_i_ezsignsignaturecustomdate_y_Set() const;
    bool is_i_ezsignsignaturecustomdate_y_Valid() const;

    qint32 getIEzsignsignaturecustomdateOffsetx() const;
    void setIEzsignsignaturecustomdateOffsetx(const qint32 &i_ezsignsignaturecustomdate_offsetx);
    bool is_i_ezsignsignaturecustomdate_offsetx_Set() const;
    bool is_i_ezsignsignaturecustomdate_offsetx_Valid() const;

    qint32 getIEzsignsignaturecustomdateOffsety() const;
    void setIEzsignsignaturecustomdateOffsety(const qint32 &i_ezsignsignaturecustomdate_offsety);
    bool is_i_ezsignsignaturecustomdate_offsety_Set() const;
    bool is_i_ezsignsignaturecustomdate_offsety_Valid() const;

    QString getSEzsignsignaturecustomdateFormat() const;
    void setSEzsignsignaturecustomdateFormat(const QString &s_ezsignsignaturecustomdate_format);
    bool is_s_ezsignsignaturecustomdate_format_Set() const;
    bool is_s_ezsignsignaturecustomdate_format_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsignaturecustomdate_id;
    bool m_pki_ezsignsignaturecustomdate_id_isSet;
    bool m_pki_ezsignsignaturecustomdate_id_isValid;

    qint32 m_i_ezsignsignaturecustomdate_x;
    bool m_i_ezsignsignaturecustomdate_x_isSet;
    bool m_i_ezsignsignaturecustomdate_x_isValid;

    qint32 m_i_ezsignsignaturecustomdate_y;
    bool m_i_ezsignsignaturecustomdate_y_isSet;
    bool m_i_ezsignsignaturecustomdate_y_isValid;

    qint32 m_i_ezsignsignaturecustomdate_offsetx;
    bool m_i_ezsignsignaturecustomdate_offsetx_isSet;
    bool m_i_ezsignsignaturecustomdate_offsetx_isValid;

    qint32 m_i_ezsignsignaturecustomdate_offsety;
    bool m_i_ezsignsignaturecustomdate_offsety_isSet;
    bool m_i_ezsignsignaturecustomdate_offsety_isValid;

    QString m_s_ezsignsignaturecustomdate_format;
    bool m_s_ezsignsignaturecustomdate_format_isSet;
    bool m_s_ezsignsignaturecustomdate_format_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignaturecustomdate_Request)

#endif // Ezsignsignaturecustomdate_Request_H
